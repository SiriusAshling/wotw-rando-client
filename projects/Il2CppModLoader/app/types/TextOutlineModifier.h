#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextOutlineModifier {
        namespace {
            app::TextOutlineModifier__Class* type_info_ref = nullptr;
        }
        app::TextOutlineModifier__Class** type_info = &type_info_ref;
        inline app::TextOutlineModifier__Class* get_class() {
            return il2cpp::get_class<app::TextOutlineModifier__Class>(type_info, "", "TextOutlineModifier");
        }
        inline app::TextOutlineModifier* create() {
            return il2cpp::create_object<app::TextOutlineModifier>(get_class());
        }
    } // namespace TextOutlineModifier
} // namespace app::classes::types