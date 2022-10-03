#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTargetType__Enum {
        namespace {
            app::RenderTargetType__Enum__Class* type_info_ref = nullptr;
        }
        app::RenderTargetType__Enum__Class** type_info = &type_info_ref;
        inline app::RenderTargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetType__Enum__Class>(type_info, "Moon.Rendering", "RenderTargetType");
        }
        inline app::RenderTargetType__Enum* create() {
            return il2cpp::create_object<app::RenderTargetType__Enum>(get_class());
        }
    } // namespace RenderTargetType__Enum
} // namespace app::classes::types
