#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XMLHelper {
        namespace {
            app::XMLHelper__Class* type_info_ref = nullptr;
        }
        app::XMLHelper__Class** type_info = &type_info_ref;
        inline app::XMLHelper__Class* get_class() {
            return il2cpp::get_class<app::XMLHelper__Class>(type_info, "", "XMLHelper");
        }
        inline app::XMLHelper* create() {
            return il2cpp::create_object<app::XMLHelper>(get_class());
        }
    } // namespace XMLHelper
} // namespace app::classes::types