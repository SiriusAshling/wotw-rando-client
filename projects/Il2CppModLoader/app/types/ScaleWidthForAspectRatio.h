#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleWidthForAspectRatio {
        namespace {
            app::ScaleWidthForAspectRatio__Class* type_info_ref = nullptr;
        }
        app::ScaleWidthForAspectRatio__Class** type_info = &type_info_ref;
        inline app::ScaleWidthForAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::ScaleWidthForAspectRatio__Class>(type_info, "", "ScaleWidthForAspectRatio");
        }
        inline app::ScaleWidthForAspectRatio* create() {
            return il2cpp::create_object<app::ScaleWidthForAspectRatio>(get_class());
        }
    } // namespace ScaleWidthForAspectRatio
} // namespace app::classes::types
