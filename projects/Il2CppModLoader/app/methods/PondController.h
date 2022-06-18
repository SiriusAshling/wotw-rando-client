#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PondController {
    IL2CPP_REGISTER_METHOD(0x00C5E4E0, void, FixedUpdate, (app::PondController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5E850, void, OnTriggerEnter, (app::PondController * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00C5ECD0, void, OnAnimationEnd, (app::PondController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732A98, PondController_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C5F390, void, ctor, (app::PondController * this_ptr))
}