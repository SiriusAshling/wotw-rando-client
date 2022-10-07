#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuAbilities {
        namespace {
            app::KuAbilities__Class* type_info_ref = nullptr;
        }
        app::KuAbilities__Class** type_info = &type_info_ref;
        inline app::KuAbilities__Class* get_class() {
            return il2cpp::get_class<app::KuAbilities__Class>(type_info, "", "KuAbilities");
        }
        inline app::KuAbilities* create() {
            return il2cpp::create_object<app::KuAbilities>(get_class());
        }
    } // namespace KuAbilities
} // namespace app::classes::types