#include <dll_main.h>
#include <Common/ext.h>
#include <csharp_bridge.h>
#include <unordered_map>
#include <features/messages.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader\il2cpp_helpers.h>

using namespace modloader;

extern void refresh_icon_alphas(bool is_map_visible);

namespace
{
    IL2CPP_BINDING(, GameWorld, app::GameWorldArea*, GetArea, (app::GameWorld* thisPtr, app::GameWorldAreaID__Enum areaID))
    IL2CPP_BINDING(, GameWorld, app::RuntimeGameWorldArea*, FindRuntimeArea, (app::GameWorld* thisPtr, app::GameWorldArea* area));
    IL2CPP_BINDING(, RuntimeGameWorldArea, void, DiscoverAllAreas, (app::RuntimeGameWorldArea* thisPtr));

    app::GameWorld* game_world_instance = 0;
    std::unordered_map<app::GameWorldAreaID__Enum, int> saved_area_prices;

    NESTED_IL2CPP_INTERCEPT(, GameWorldArea, LupoAreaData, int, GetAreaMapSpiritLevelCost, (app::GameWorldArea_LupoAreaData* this_ptr)) {
        return this_ptr->AreaMapSpiritLevelCost;
    }

    IL2CPP_INTERCEPT(, CartographerEntity, int, get_MapCost, (app::CartographerEntity* this_ptr)) {
        this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
        return CartographerEntity::get_MapCost(this_ptr);
    }

    void set_lupo_price(app::GameWorldAreaID__Enum area, int32_t price)
    {
        auto* gw_area = GameWorld::GetArea(game_world_instance, area);
        if (gw_area != nullptr)
        {
            gw_area->fields.LupoData.AreaMapSpiritLevelCost = price;
            gw_area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = price;
        }
    }

    bool found_game_world()
    {
	    return game_world_instance != 0;
    }

    IL2CPP_INTERCEPT(, GameWorld, void, Awake, (app::GameWorld* thisPtr)) {
	    if (game_world_instance != thisPtr)
	    {
            trace(MessageType::Debug, 5, "game", "Found GameWorld instance!");
		    game_world_instance = thisPtr;
            for (const auto& pair : saved_area_prices)
                set_lupo_price(pair.first, pair.second);
	    }
	    GameWorld::Awake(thisPtr);
    }
    
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, IsVisible, (app::RuntimeWorldMapIcon* thisPtr, app::AreaMapUI* areaMap)) {
        return true;
    }

    extern "C" __declspec(dllexport)
    bool discover_everything() {
	    if (game_world_instance)
	    {
            // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
		    for (int32_t i = 0; i <= 15; i++)
		    {
			    auto area = GameWorld::GetArea(game_world_instance, static_cast<app::GameWorldAreaID__Enum>(i));
			    if (!area) {
				    //Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				    continue;
			    }

			    auto runtimeArea = GameWorld::FindRuntimeArea(game_world_instance, area);
			    if (!runtimeArea)
				    continue;

                RuntimeGameWorldArea::DiscoverAllAreas(runtimeArea);
            }

            trace(MessageType::Debug, 5, "game", "Map revealed");
		    return true;
	    }
	    else {
            trace(MessageType::Warning, 3, "game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
		    return false;
	    }
    }

    app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum_None;

    IL2CPP_BINDING(, GameMapUI, app::RuntimeGameWorldArea*, get_CurrentHighlightedArea, (app::GameMapUI* this_ptr));
    IL2CPP_INTERCEPT(, GameMapUI, void, FixedUpdate, (app::GameMapUI* this_ptr)) {
      GameMapUI::FixedUpdate(this_ptr);
      auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
      if (area == nullptr || area->fields.Area == nullptr)
          return;
      auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
      if (aid != area_id) {
        area_id = aid;
        csharp_bridge::on_map_pan(area_id);
      }

    }

    IL2CPP_INTERCEPT(, AreaMapUI, void, Show, (app::AreaMapUI* this_ptr, bool set_menu_audio_state)) {
        AreaMapUI::Show(this_ptr, set_menu_audio_state);
        area_id = app::GameWorldAreaID__Enum_None;
        area_map_open = true;
        refresh_icon_alphas(true);
    }
        
    IL2CPP_INTERCEPT(, AreaMapUI, void, Hide, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Hide(this_ptr);
        hide_below_hint();
        area_map_open = false;
        refresh_icon_alphas(false);
    }

    bool disable_next_update_map_target = false;
    IL2CPP_INTERCEPT(, AreaMapNavigation, void, SetTarget, (app::AreaMapNavigation* this_ptr, app::Quest* quest)) {
        if (csharp_bridge::check_ini("DisableQuestFocus"))
            disable_next_update_map_target = true;
        else
            AreaMapNavigation::SetTarget(this_ptr, quest);
    }

    IL2CPP_INTERCEPT(, AreaMapNavigation, void, UpdateMapTarget, (app::AreaMapNavigation* this_ptr)) {
        if (!disable_next_update_map_target)
            AreaMapNavigation::UpdateMapTarget(this_ptr);

        disable_next_update_map_target = false;
    }

    IL2CPP_BINDING(AK.Wwise, State, void, SetValue, (app::State* state));
    STATIC_IL2CPP_BINDING(Game, UI, app::MenuScreenManager*, get_Menu, ());
    IL2CPP_BINDING(, MenuScreenManager, void, HideMenuScreen, (app::MenuScreenManager* this_ptr, bool immediate, bool fade));
    IL2CPP_INTERCEPT(Moon.Timeline, DiscoverAreasEntity, void, ChangeState, (app::DiscoverAreasEntity* this_ptr, app::DiscoverAreasEntity_State__Enum value)) {
        DiscoverAreasEntity::ChangeState(this_ptr, value);

        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Start) {
            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Reveal);
            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Fade);
            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_WaitForInput);
            auto menu = UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);
        }
    }

    float scaling_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(, AreaMapUI, void, Awake, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Awake(this_ptr);
        auto transition = il2cpp::get_class<app::GameMapTransitionManager__Class>("", "GameMapTransitionManager");
        transition->static_fields->WorldMapEnabled = csharp_bridge::check_ini("WorldMapEnabled");
        if (original_zoom < 0.0f)
            original_zoom = this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel;
        if (original_scale < 0.0f)
            original_scale = this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor;

        this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._Navigation_k__BackingField->fields.WorldMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor = original_scale / scaling_factor;
    }
}

INJECT_C_DLLEXPORT void set_lupo_area_price(app::GameWorldAreaID__Enum area, int32_t price)
{
    saved_area_prices[area] = price;
    if (game_world_instance != nullptr)
        set_lupo_price(area, price);
}
