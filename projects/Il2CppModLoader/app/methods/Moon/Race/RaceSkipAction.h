#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Race::RaceSkipAction {
    IL2CPP_REGISTER_METHOD(0x00C49810, void, Perform, (app::RaceSkipAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceSkipAction * this_ptr))
} // namespace app::classes::Moon::Race::RaceSkipAction
