#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TwirlSettings {
    IL2CPP_REGISTER_METHOD(0x013DCB80, app::TwirlSettings *, Clone, (app::TwirlSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1C80, void, CopyFrom, (app::TwirlSettings * this_ptr, app::TwirlSettings * settings_twirl_settings))
    IL2CPP_REGISTER_METHOD(0x013DCCD0, void, ctor, (app::TwirlSettings * this_ptr))
}