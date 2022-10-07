#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyLevel__Array {
        namespace {
            app::UpgradablePropertyLevel__Array__Class* type_info_ref = nullptr;
        }
        app::UpgradablePropertyLevel__Array__Class** type_info = &type_info_ref;
        inline app::UpgradablePropertyLevel__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyLevel__Array__Class>(type_info, "", "UpgradablePropertyLevel[]");
        }
        inline app::UpgradablePropertyLevel__Array* create() {
            return il2cpp::create_object<app::UpgradablePropertyLevel__Array>(get_class());
        }
    } // namespace UpgradablePropertyLevel__Array
} // namespace app::classes::types