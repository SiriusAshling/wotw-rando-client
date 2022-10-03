#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInertiaModifier {
        namespace {
            app::RigidbodyInertiaModifier__Class* type_info_ref = nullptr;
        }
        app::RigidbodyInertiaModifier__Class** type_info = &type_info_ref;
        inline app::RigidbodyInertiaModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInertiaModifier__Class>(type_info, "", "RigidbodyInertiaModifier");
        }
        inline app::RigidbodyInertiaModifier* create() {
            return il2cpp::create_object<app::RigidbodyInertiaModifier>(get_class());
        }
    } // namespace RigidbodyInertiaModifier
} // namespace app::classes::types
