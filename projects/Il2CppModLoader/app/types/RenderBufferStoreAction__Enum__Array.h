#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderBufferStoreAction__Enum__Array {
        namespace {
            app::RenderBufferStoreAction__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::RenderBufferStoreAction__Enum__Array__Class** type_info = &type_info_ref;
        inline app::RenderBufferStoreAction__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferStoreAction__Enum__Array__Class>(type_info, "UnityEngine.Rendering", "RenderBufferStoreAction[]");
        }
        inline app::RenderBufferStoreAction__Enum__Array* create() {
            return il2cpp::create_object<app::RenderBufferStoreAction__Enum__Array>(get_class());
        }
    } // namespace RenderBufferStoreAction__Enum__Array
} // namespace app::classes::types