#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TransformFollower {
    IL2CPP_REGISTER_METHOD(0x00B06EE0, void, Start, (app::TransformFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B06FA0, void, FixedUpdate, (app::TransformFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B076D0, void, ctor, (app::TransformFollower * this_ptr))
}