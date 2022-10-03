#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CopyScaleSign {
        namespace {
            app::CopyScaleSign__Class* type_info_ref = nullptr;
        }
        app::CopyScaleSign__Class** type_info = &type_info_ref;
        inline app::CopyScaleSign__Class* get_class() {
            return il2cpp::get_class<app::CopyScaleSign__Class>(type_info, "", "CopyScaleSign");
        }
        inline app::CopyScaleSign* create() {
            return il2cpp::create_object<app::CopyScaleSign>(get_class());
        }
    } // namespace CopyScaleSign
} // namespace app::classes::types
