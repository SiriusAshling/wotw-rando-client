#include <constants.h>
#include <enums/uber_state.h>
#include <Common/ext.h>
#include <Common/settings.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/console.h>

#include <chrono>

using namespace modloader;

namespace
{
    app::UberID* create_uber_id_ptr(int id)
    {
        auto uber_id = il2cpp::create_object<app::UberID>("Moon", "UberID");
        uber_id->fields.m_id = id;
        return uber_id;
    }


    // We cache the scriptable objects and use il2cpp::unity::instantiate_object to create instances from them
    // because that's a lot faster
    std::unordered_map<Il2CppClass*, app::IUberState*> uber_state_so_cache;
    app::UberStateGroup* group_so_cache = nullptr;

    template<typename T> Il2CppClass* get_klass();
    template<> Il2CppClass* get_klass<app::SerializedBooleanUberState>() { return il2cpp::get_class("Moon", "SerializedBooleanUberState"); }
    template<> Il2CppClass* get_klass<app::SerializedByteUberState>() { return il2cpp::get_class("Moon", "SerializedByteUberState"); }
    template<> Il2CppClass* get_klass<app::SerializedIntUberState>() { return il2cpp::get_class("Moon", "SerializedIntUberState"); }
    template<> Il2CppClass* get_klass<app::SerializedFloatUberState>() { return il2cpp::get_class("Moon", "SerializedFloatUberState"); }
    template<> Il2CppClass* get_klass<app::BooleanUberState>() { return il2cpp::get_class("Moon", "BooleanUberState"); }
    template<> Il2CppClass* get_klass<app::ByteUberState>() { return il2cpp::get_class("Moon", "ByteUberState"); }
    template<> Il2CppClass* get_klass<app::IntUberState>() { return il2cpp::get_class("Moon", "IntUberState"); }
    template<> Il2CppClass* get_klass<app::FloatUberState>() { return il2cpp::get_class("Moon", "FloatUberState"); }

    template<typename T, typename V>
    app::IUberState* add_state(UberStateGroup group, const std::string& state_name, int state_id, V default_value)
    {
        auto klass = get_klass<T>();

        if (!uber_state_so_cache.contains(klass)) {
            uber_state_so_cache[klass] = reinterpret_cast<app::IUberState*>(il2cpp::unity::create_scriptable_object<T>(get_klass<T>()));
        }

        auto state = il2cpp::unity::instantiate_object<T>(reinterpret_cast<T*>(uber_state_so_cache[klass]));

        if (group_so_cache == nullptr) {
            group_so_cache = il2cpp::unity::create_scriptable_object<app::UberStateGroup>("Moon", "UberStateGroup");
        }

        state->fields.Group = il2cpp::unity::instantiate_object<app::UberStateGroup>(group_so_cache);

        state->fields.Group->fields._.m_id = create_uber_id_ptr(static_cast<int>(group));
        il2cpp::invoke(state->fields.Group, "set_name", il2cpp::string_new(uber_state_group_name(group)));

        state->fields._.m_id = create_uber_id_ptr(state_id);
        il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name.c_str()));

        state->fields.DefaultValue = default_value;
        state->fields.m_value = default_value;
        state->fields.NamedValues = nullptr;
        state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;

        return reinterpret_cast<app::IUberState*>(state);
    }

    void print_time(std::chrono::time_point<std::chrono::steady_clock> start, std::string_view tag) {
        auto now = std::chrono::high_resolution_clock::now();
        auto time_span = duration_cast<std::chrono::microseconds>(now - start);
        modloader::console::console_send(format("%.2f ms  %s", time_span.count() / 1000.f, tag.data()));
        modloader::console::console_flush();
    }

    IL2CPP_INTERCEPT(Moon, UberStateCollection, void, PrepareRuntimeDataType, (app::UberStateCollection* this_ptr)) {
        auto start_time = std::chrono::high_resolution_clock::now();

        std::vector<app::IUberState*> states = {
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "sword", app::AbilityType__Enum_Sword, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "double_jump", app::AbilityType__Enum_DoubleJump, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "regenerate", app::AbilityType__Enum_MeditateSpell, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bow", app::AbilityType__Enum_Bow, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "dash", app::AbilityType__Enum_DashNew, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bash", app::AbilityType__Enum_Bash, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grapple", app::AbilityType__Enum_SpiritLeash, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "water_dash", app::AbilityType__Enum_WaterDash, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "flash", app::AbilityType__Enum_GlowSpell, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grenade", app::AbilityType__Enum_Grenade, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "burrow", app::AbilityType__Enum_Digging, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "launch", app::AbilityType__Enum_ChargeJump, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "ancestral_light", app::AbilityType__Enum_DamageUpgradeA, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "ancestral_light_2", app::AbilityType__Enum_DamageUpgradeB, false),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Water Breath", 23, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Spike", 74, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Spirit Smash", 98, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Fast Travel", 105, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Spirit Star", 106, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Blaze", 115, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Sentry", 116, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Exploding Spike", 1074, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Shock Smash", 1098, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Static Star", 1106, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Charge Blaze", 1115, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Rapid Sentry", 1116, false),

            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Water Breath cost", 10023, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Spike cost", 10074, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Spirit Smash cost", 10098, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Fast Travel cost", 10105, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Spirit Star cost", 10106, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Blaze cost", 10115, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Sentry cost", 10116, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Exploding Spike cost", 11074, 300),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Shock Smash cost", 11098, 300),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Static Star cost", 11106, 300),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Charge Blaze cost", 11115, 300),
            add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "Rapid Sentry cost", 11116, 300),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "Has bought everything", 20000, false),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Energy", 26, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Vitality", 22, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Overcharge", 1, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Wingclip", 3, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "TripleJump", 2, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Finesse", 40, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Swap", 5, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "LightHarvest", 19, false),

            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Energy cost", 126, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Vitality cost", 122, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Overcharge cost", 101, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Wingclip cost", 103, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "TripleJump cost", 102, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Finesse cost", 140, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "Swap cost", 105, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "LightHarvest cost", 119, 0),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "Has bought everything", 20000, false),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Spirit Well", 16825, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Shard Shop", 7528, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Houses A", 51230, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Houses B", 23607, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Houses C", 40448, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Remove Thorns", 18751, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Open Cave", 16586, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "Beutify", 15068, 0),

            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Spirit Well cost", 116825, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Shard Shop cost", 107528, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Houses A cost", 151230, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Houses B cost", 123607, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Houses C cost", 140448, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Remove Thorns cost", 118751, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Open Cave cost", 116586, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "Beutify cost", 115068, 0),

            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Hammer speed multiplier", 0, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Sword speed multiplier", 1, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Blaze cost multiplier", 2, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Spike cost multiplier", 3, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Shuriken cost multiplier", 4, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Sentry cost multiplier", 5, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Bow cost multiplier", 6, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Regeneration cost multiplier", 7, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Flash cost multiplier", 8, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Light Burst cost multiplier", 9, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Bow rapid fire multiplier", 10, 1),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Spear speed multiplier", 11, 1),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Relic", 20, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Health Regeneration", 30, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Energy Regeneration", 31, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Extra Double Jumps", 35, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Extra Dashes", 36, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Extra Grenades", 40, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Grenades explode on collision", 41, true),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Bashable uncharged Grenades", 42, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Charged Air Grenades", 43, false),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Grenade charge time modifier", 44, 1.0f),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Grenade multishot", 45, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Hammer Speed", 50, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Sword Speed", 51, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Blaze Efficiency", 52, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Spike Efficiency", 53, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Shuriken Efficiency", 54, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Sentry Efficiency", 55, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Bow Efficiency", 56, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Regenerate Efficiency", 57, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Flash Efficiency", 58, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Light Burst Efficiency", 59, 0),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Bow as fire source", 70, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Blaze as fire source", 71, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Sword as fire source", 72, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Hammer as fire source", 73, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Spear as fire source", 74, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Shuriken as fire source", 75, false),

            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Launch Speed", 80, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Dash Distance", 81, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Bash Speed", 82, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Burrow Speed", 83, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Burrow Dash Speed", 84, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Swim Speed", 85, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Swim Dash Speed", 86, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Jump Height", 87, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Wall Jump Strength", 88, 1.0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "Double Jump Strength", 89, 1.0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Exploding Spike", 95, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Shock Smash", 96, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Static Star", 97, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Charge Blaze", 98, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Rapid Sentry", 99, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Marsh Relic", 100, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Hollow Relic", 101, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Glades Relic", 102, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Wellspring Relic", 103, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Burrows Relic", 104, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Woods Relic", 105, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Reach Relic", 106, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Pools Relic", 107, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Depths Relic", 108, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Wastes Relic", 109, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "Willow Relic", 111, 0),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "Overflow Pickup Upgrade", 150, false),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::GameState, "Spawn", 0, false),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Reload", 1, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Binding One", 2, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Binding Two", 3, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Binding Three", 4, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Binding Four", 5, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Binding Five", 6, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::GameState, "Load", 7, 0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::GameState, "Goal Modes Complete", 11, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Teleport", 20, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Jump", 30, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Double Jump", 31, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Dash", 32, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Bash", 33, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Glide", 34, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Sword", 35, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Hammer", 36, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Spike", 37, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Spirit Star", 38, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Light Burst", 39, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Bow", 40, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Blaze", 41, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Sentry", 42, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Flash", 43, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Launch", 44, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Wall Jump", 45, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Burrow", 46, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Water Dash", 47, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Flap", 48, false),
            add_state<app::BooleanUberState>(UberStateGroup::GameState, "On Regenerate", 49, false),
            // 100 max health
            // 101 max energy
            // 102 ore
            // 103 keystones
            // 104 shard slots
            // 105 health
            // 106 energy
            // 107 spirit light
            // arguably these are just stats but w/e!!!
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Collected Keystones", 0, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Purchased Keystones", 1, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Pickups Collected", 2, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Spirit Light Collected", 3, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Spirit Light Spent", 4, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Ore Collected", 5, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "Ore Spent", 6, 0),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 1", 10, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 2", 11, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 3", 12, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 4", 13, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 5",  14, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 6",  15, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 7",  16, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 8",  17, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 9",  18, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Checkable Item Hint 10", 19, false),

            // hate this, hope we don't end up needing more of these!
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "HollowTP", 106, false),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Tuley Exists", 300, false),

            // skills
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Bash", 1000, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "WallJump", 1003, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "DoubleJump", 1005, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Launch", 1008, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Feather", 1014, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "WaterBreath", 1023, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "LightBurst", 1051, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Grapple", 1057, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Flash", 1062, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Spike", 1074, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Regenerate", 1077, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "SpiritArc", 1097, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "SpiritSmash", 1098, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Torch", 1099, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "SpiritEdge", 1100, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Burrow", 1101, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Dash", 1102, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "WaterDash", 1104, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "SpiritStar", 1106, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Seir", 1108, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Blaze", 1115, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Sentry", 1116, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Flap", 1118, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "DamageUpgrade1", 1120, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "DamageUpgrade2", 1121, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Clean Water", 2000, false),
            // deep skills
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Spirit Flame", 1015, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Resilience", 1031, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Health Efficiency", 1032, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Energy Efficiency", 1039, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Bow Charge", 1109, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Spirit Magnet", 1112, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "Weapon Charge", 1119, false),

            // LOOK IT'S FINE
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Marsh Key Item Hint", 10000, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Hollow Key Item Hint", 10001, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Glades Key Item Hint", 10002, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Wellspring Key Item Hint", 10003, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Burrows Key Item Hint", 10004, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Woods Key Item Hint", 10005, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Reach Key Item Hint", 10006, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Pools Key Item Hint", 10007, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Depths Key Item Hint", 10008, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Wastes Key Item Hint", 10009, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "Willow Key Item Hint", 10011, 0),

            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "Squares", 0, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "Lines", 1, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "Rank", 2, 0),

            // murder tracking
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "Kills", 10, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "SwordKills", 11, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "HammerKills", 12, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "BowKills", 13, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "SpearKills", 14, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "SentryKills", 15, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "BlazeKills", 16, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "GrenadeKills", 17, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "BurnDoTKills", 18, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "ShurikenKills", 19, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "LaunchKills", 20, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "FlashKills", 21, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "BashKills", 22, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "DrownedEnemies", 23, 0),

            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "MinerKills", 40, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "FlierKills", 41, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "TentaKills", 42, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "SlimeKills", 43, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "FishKills", 44, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "ExploderKills", 45, 0),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "glades_tp_fix", 0, true),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "prevent_map_reactivate_tps", 1, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "marsh_starts_sunny", 2, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "howl_starts_dead", 3, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "enable_vanilla_regen_tree", 4, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "disable_tree_check_for_rain", 5, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "kwolok_door_available", 6, true),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "chaos_mode", CHAOS_MODE_ID, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "prevent_pickup", PREVENT_PICKUP_ID, false),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "stomp_through_portals", STOMP_THROUGH_PORTALS_ID, false),

            add_state<app::SerializedIntUberState>(UberStateGroup::RandoConfig, "force_no_air_deceleration_flag", FORCE_AIR_NO_DECELERATION_ID, 0),

            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoConfig, "chaos_trigger_min", CHAOS_TRIGGER_MIN_ID, 30.f),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoConfig, "chaos_trigger_min", CHAOS_TRIGGER_MAX_ID, 60.f),

            add_state<app::SerializedBooleanUberState>(UberStateGroup::MapFilter, "spoiler_icon_tag", 70, false),

            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Marsh Time", 0, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Hollow Time", 1, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Glades Time", 2, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Wellspring Time", 3, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Burrows Time", 4, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Woods Time", 5, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Reach Time", 6, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Pools Time", 7, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Depths Time", 8, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Wastes Time", 9, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Ruins Time", 10, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Willow Time", 11, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Shop Time", 12, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Void Time", 13, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Marsh Deaths", 20, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Hollow Deaths", 21, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Glades Deaths", 22, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Wellspring Deaths", 23, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Burrows Deaths", 24, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Woods Deaths", 25, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Reach Deaths", 26, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Pools Deaths", 27, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Depths Deaths", 28, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Wastes Deaths", 29, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Ruins Deaths", 30, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Willow Deaths", 31, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Shop Deaths", 32, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Void Deaths", 33, 0),

            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Marsh Pickups", 40, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Hollow Pickups", 41, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Glades Pickups", 42, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Wellspring Pickups", 43, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Burrows Pickups", 44, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Woods Pickups", 45, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Reach Pickups", 46, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Pools Pickups", 47, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Depths Pickups", 48, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Wastes Pickups", 49, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Ruins Pickups", 50, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Willow Pickups", 51, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Shop Pickups", 52, 0),
            add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "Void Pickups", 53, 0),
            // TODO: unclear to me that we need to track void pickups

            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Marsh Pickups", 60, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Hollow Pickups", 61, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Glades Pickups", 62, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Wellspring Pickups", 63, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Burrows Pickups", 64, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Woods Pickups", 65, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Reach Pickups", 66, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Pools Pickups", 67, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Depths Pickups", 68, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Wastes Pickups", 69, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Ruins Pickups", 70, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Willow Pickups", 71, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Shop Pickups", 72, 0),

            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Time", 100, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Deaths", 101, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Current Drought", 102, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Longest Drought", 103, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Time since last checkpoint", 104, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Time lost to deaths", 105, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "warps used", 106, 0),
            add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "Peak PPM time", 107, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Peak PPM count", 108, 0),
            add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "Total Pickup Count", 109, 0),

            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Marsh Map Cost", app::GameWorldAreaID__Enum_InkwaterMarsh, 200),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Hollow Map Cost", app::GameWorldAreaID__Enum_KwoloksHollow, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Wellspring Map Cost", app::GameWorldAreaID__Enum_WaterMill, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Burrow Map Cost", app::GameWorldAreaID__Enum_MidnightBurrow, 50),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Reach Map Cost", app::GameWorldAreaID__Enum_BaursReach, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Pools Map Cost", app::GameWorldAreaID__Enum_LumaPools, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Depths Map Cost", app::GameWorldAreaID__Enum_MouldwoodDepths, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Wastes Map Cost", app::GameWorldAreaID__Enum_WindsweptWastes, 150),
            add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "Willows End Map Cost", app::GameWorldAreaID__Enum_WillowsEnd, 50),

            add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "HCMapIconCost", 19397,  0),
            add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "ECMapIconCost", 57988,  0),
            add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "ShardMapIconCost", 41667,  0),
            add_state<app::SerializedBooleanUberState>(UberStateGroup::npcsStateGroup, "Has bought everything", 20000, false),
        };

        print_time(start_time, "Built state list");

        // Game states
        const int GAME_MODES_INT_START = 0;
        const int GAME_MODES_BOOL_START = 1000;
        const int GAME_MODES_FLOAT_START = 2000;
        const int GAME_MODES_INT_COUNT = 5;
        const int GAME_MODES_BOOL_COUNT = 5;
        const int GAME_MODES_FLOAT_COUNT = 5;
        for (int i = 0; i < GAME_MODES_INT_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoGameModes, format("%3d_int", i), GAME_MODES_INT_START + i, 0));

        for (int i = 0; i < GAME_MODES_BOOL_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoGameModes, format("%3d_bool", i), GAME_MODES_BOOL_START + i, false));

        for (int i = 0; i < GAME_MODES_FLOAT_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoGameModes, format("%3d_float", i), GAME_MODES_FLOAT_START + i, false));

        // Plando states
        const int PLANDO_INT_START = 0;
        const int PLANDO_BOOL_START = 100;
        const int PLANDO_FLOAT_START = 150;
        const int PLANDO_INT_COUNT = 100;
        const int PLANDO_BOOL_COUNT = 50;
        const int PLANDO_FLOAT_COUNT = 25;
        for (int i = 0; i < PLANDO_INT_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedIntUberState>(UberStateGroup::PlandoVars, format("%3d_int", i), PLANDO_INT_START + i, 0));

        for (int i = 0; i < PLANDO_BOOL_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedBooleanUberState>(UberStateGroup::PlandoVars, format("%3d_bool", i), PLANDO_BOOL_START + i, false));

        for (int i = 0; i < PLANDO_FLOAT_COUNT; ++i)
            states.push_back(
                add_state<app::SerializedFloatUberState>(UberStateGroup::PlandoVars, format("%3d_float", i), PLANDO_FLOAT_START + i, false));

        // Saved appliers.
        const int APPLIERS_GROUP_COUNT = 50;
        for (int i = 0; i < APPLIERS_GROUP_COUNT; ++i)
        {
            states.push_back(
                add_state<app::SerializedIntUberState>(UberStateGroup::Appliers, format("%3d_id", i * 2), i * 2, 0));

            states.push_back(
                add_state<app::SerializedIntUberState>(UberStateGroup::Appliers, format("%3d_value", i * 2 + 1), i * 2 + 1, 0));
        }

        print_time(start_time, "Built custom state list");

        for (int i = 0; i < 2000; ++i) {
            states.push_back(
                add_state<app::SerializedBooleanUberState>(UberStateGroup::MultiVars, format("%3d_multi", i), i, false));
        }

        print_time(start_time, "Built multi state list");

        for (auto* state : states)
            il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);

        print_time(start_time, "Added states");

        trace(MessageType::Info, 5, "initialize", "Custom uber states initialized.");
        UberStateCollection::PrepareRuntimeDataType(this_ptr);

        print_time(start_time, "Uber states initialized");
    }
}