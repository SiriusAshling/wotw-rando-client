#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_IconData_1 {
        namespace {
            app::TextBoxIconsFontGenerator_IconData_1__Class* type_info_ref = nullptr;
        }
        app::TextBoxIconsFontGenerator_IconData_1__Class** type_info = &type_info_ref;
        inline app::TextBoxIconsFontGenerator_IconData_1__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxIconsFontGenerator_IconData_1__Class>(type_info, "Moon.UI", "TextBoxIconsFontGenerator", "IconData");
        }
        inline app::TextBoxIconsFontGenerator_IconData_1* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_IconData_1>(get_class());
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBoxIconsFontGenerator_IconData_1__Array>(get_class(), size);
        }
    } // namespace TextBoxIconsFontGenerator_IconData_1
} // namespace app::classes::types
