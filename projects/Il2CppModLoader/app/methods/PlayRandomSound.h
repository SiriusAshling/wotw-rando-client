#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayRandomSound {
    IL2CPP_REGISTER_METHOD(0x0117A9A0, void, Start, (app::PlayRandomSound * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A9B0, void, DoIt, (app::PlayRandomSound * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117AE30, void, ctor, (app::PlayRandomSound * this_ptr))
} // namespace app::classes::PlayRandomSound
