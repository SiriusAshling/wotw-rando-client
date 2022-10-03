#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TransitionSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, (app::TransitionSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::TransitionSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TransitionSetupData * this_ptr))
} // namespace app::classes::TransitionSetupData
