#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AudioSourceSuspendable {
    IL2CPP_REGISTER_METHOD(0x00858E30, void, Awake, (app::AudioSourceSuspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00858EC0, void, Suspend, (app::AudioSourceSuspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00858F90, void, Resume, (app::AudioSourceSuspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00859010, void, set_IsSuspended, (app::AudioSourceSuspendable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (app::AudioSourceSuspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::AudioSourceSuspendable * this_ptr))
}