#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Bindings::NativeWritableSelfAttribute {
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, (app::NativeWritableSelfAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_WritableSelf, (app::NativeWritableSelfAttribute * this_ptr, bool value))
} // namespace app::classes::UnityEngine::Bindings::NativeWritableSelfAttribute
