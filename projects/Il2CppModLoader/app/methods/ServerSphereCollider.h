#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ServerSphereCollider {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerSphereCollider * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x005A08F0, app::Object*, CreateData, (app::ServerSphereCollider * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x005A0C40, app::Component_1*, ApplyData, (app::ServerSphereCollider * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerSphereCollider
