#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefractionModifier {
        namespace {
            app::RefractionModifier__Class* type_info_ref = nullptr;
        }
        app::RefractionModifier__Class** type_info = &type_info_ref;
        inline app::RefractionModifier__Class* get_class() {
            return il2cpp::get_class<app::RefractionModifier__Class>(type_info, "", "RefractionModifier");
        }
        inline app::RefractionModifier* create() {
            return il2cpp::create_object<app::RefractionModifier>(get_class());
        }
    } // namespace RefractionModifier
} // namespace app::classes::types
