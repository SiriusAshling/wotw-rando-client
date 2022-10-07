#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClearSettings {
        namespace {
            app::ClearSettings__Class* type_info_ref = nullptr;
        }
        app::ClearSettings__Class** type_info = &type_info_ref;
        inline app::ClearSettings__Class* get_class() {
            return il2cpp::get_class<app::ClearSettings__Class>(type_info, "Moon.Rendering", "ClearSettings");
        }
        inline app::ClearSettings* create() {
            return il2cpp::create_object<app::ClearSettings>(get_class());
        }
        inline app::ClearSettings__Boxed* box(app::ClearSettings value) {
            return il2cpp::box_value<app::ClearSettings__Boxed>(get_class(), value);
        }
    } // namespace ClearSettings
} // namespace app::classes::types