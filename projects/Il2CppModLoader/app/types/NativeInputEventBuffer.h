#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeInputEventBuffer {
        namespace {
            app::NativeInputEventBuffer__Class* type_info_ref = nullptr;
        }
        app::NativeInputEventBuffer__Class** type_info = &type_info_ref;
        inline app::NativeInputEventBuffer__Class* get_class() {
            return il2cpp::get_class<app::NativeInputEventBuffer__Class>(type_info, "UnityEngineInternal.Input", "NativeInputEventBuffer");
        }
        inline app::NativeInputEventBuffer* create() {
            return il2cpp::create_object<app::NativeInputEventBuffer>(get_class());
        }
        inline app::NativeInputEventBuffer__Boxed* box(app::NativeInputEventBuffer value) {
            return il2cpp::box_value<app::NativeInputEventBuffer__Boxed>(get_class(), value);
        }
    } // namespace NativeInputEventBuffer
} // namespace app::classes::types