#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmartSaturation {
        namespace {
            app::SmartSaturation__Class* type_info_ref = nullptr;
        }
        app::SmartSaturation__Class** type_info = &type_info_ref;
        inline app::SmartSaturation__Class* get_class() {
            return il2cpp::get_class<app::SmartSaturation__Class>(type_info, "Colorful", "SmartSaturation");
        }
        inline app::SmartSaturation* create() {
            return il2cpp::create_object<app::SmartSaturation>(get_class());
        }
    } // namespace SmartSaturation
} // namespace app::classes::types
