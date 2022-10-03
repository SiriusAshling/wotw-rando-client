#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Internal_DrawTextureArguments {
        namespace {
            app::Internal_DrawTextureArguments__Class* type_info_ref = nullptr;
        }
        app::Internal_DrawTextureArguments__Class** type_info = &type_info_ref;
        inline app::Internal_DrawTextureArguments__Class* get_class() {
            return il2cpp::get_class<app::Internal_DrawTextureArguments__Class>(type_info, "UnityEngine", "Internal_DrawTextureArguments");
        }
        inline app::Internal_DrawTextureArguments* create() {
            return il2cpp::create_object<app::Internal_DrawTextureArguments>(get_class());
        }
        inline app::Internal_DrawTextureArguments__Boxed* box(app::Internal_DrawTextureArguments value) {
            return il2cpp::box_value<app::Internal_DrawTextureArguments__Boxed>(get_class(), value);
        }
    } // namespace Internal_DrawTextureArguments
} // namespace app::classes::types
