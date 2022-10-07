#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHighlightColor {
        namespace {
            app::EntityHighlightColor__Class* type_info_ref = nullptr;
        }
        app::EntityHighlightColor__Class** type_info = &type_info_ref;
        inline app::EntityHighlightColor__Class* get_class() {
            return il2cpp::get_class<app::EntityHighlightColor__Class>(type_info, "", "EntityHighlightColor");
        }
        inline app::EntityHighlightColor* create() {
            return il2cpp::create_object<app::EntityHighlightColor>(get_class());
        }
    } // namespace EntityHighlightColor
} // namespace app::classes::types