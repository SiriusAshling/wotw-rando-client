#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::XblAchievementRequirement {
    IL2CPP_REGISTER_METHOD(0x030BD8C0, void, ctor, (app::XblAchievementRequirement * this_ptr, app::XblAchievementRequirement_1 interop_requirement))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_CurrentProgressValue, (app::XblAchievementRequirement * this_ptr))
}