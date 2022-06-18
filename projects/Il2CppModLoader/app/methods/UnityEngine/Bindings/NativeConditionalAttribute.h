#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Bindings::NativeConditionalAttribute {
    IL2CPP_REGISTER_METHOD(0x020D0390, void, ctor, (app::NativeConditionalAttribute * this_ptr, app::String * condition))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Condition, (app::NativeConditionalAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Enabled, (app::NativeConditionalAttribute * this_ptr, bool value))
}