#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GizmoSystem {
    IL2CPP_REGISTER_METHOD(0x01549B60, void, Render_1, (app::Object * subject, app::GameObject * context))
    IL2CPP_REGISTER_METHOD(0x01549B60, void, Render_2, (app::SoundHost * subject, app::GameObject * context))
    IL2CPP_REGISTER_METHODINFO(0x0471D930, GizmoSystem_Render_1__MethodInfo)
}