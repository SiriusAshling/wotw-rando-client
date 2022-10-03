#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextStyle {
        namespace {
            app::TextStyle__Class* type_info_ref = nullptr;
        }
        app::TextStyle__Class** type_info = &type_info_ref;
        inline app::TextStyle__Class* get_class() {
            return il2cpp::get_class<app::TextStyle__Class>(type_info, "CatlikeCoding.TextBox", "TextStyle");
        }
        inline app::TextStyle* create() {
            return il2cpp::create_object<app::TextStyle>(get_class());
        }
        inline app::TextStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::TextStyle__Array>(get_class(), size);
        }
    } // namespace TextStyle
} // namespace app::classes::types
