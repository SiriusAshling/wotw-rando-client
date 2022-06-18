#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwitchSeriesPuzzleSwitchSetupHolder {
    IL2CPP_REGISTER_METHOD(0x01835240, app::SwitchSeriesPuzzleSetupData *, get_DeactivatedState, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018352E0, app::SwitchSeriesPuzzleSetupData *, get_ActivatedState, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01835380, void, CacheSetupStates, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x018354B0, void, Perform, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr, app::SwitchSeriesPuzzleSetupData * state))
    IL2CPP_REGISTER_METHOD(0x01835620, void, StopTimelines, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01835790, void, ctor, (app::SwitchSeriesPuzzleSwitchSetupHolder * this_ptr))
}