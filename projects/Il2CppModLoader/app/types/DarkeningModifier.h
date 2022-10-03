#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DarkeningModifier {
        namespace {
            app::DarkeningModifier__Class* type_info_ref = nullptr;
        }
        app::DarkeningModifier__Class** type_info = &type_info_ref;
        inline app::DarkeningModifier__Class* get_class() {
            return il2cpp::get_class<app::DarkeningModifier__Class>(type_info, "", "DarkeningModifier");
        }
        inline app::DarkeningModifier* create() {
            return il2cpp::create_object<app::DarkeningModifier>(get_class());
        }
    } // namespace DarkeningModifier
} // namespace app::classes::types
