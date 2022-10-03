#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_1 {
        namespace {
            app::TextBoxIconsFontGenerator_1__Class* type_info_ref = nullptr;
        }
        app::TextBoxIconsFontGenerator_1__Class** type_info = &type_info_ref;
        inline app::TextBoxIconsFontGenerator_1__Class* get_class() {
            return il2cpp::get_class<app::TextBoxIconsFontGenerator_1__Class>(type_info, "Moon.UI", "TextBoxIconsFontGenerator");
        }
        inline app::TextBoxIconsFontGenerator_1* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_1>(get_class());
        }
    } // namespace TextBoxIconsFontGenerator_1
} // namespace app::classes::types
