#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuOriMounting {
        namespace {
            app::KuOriMounting__Class* type_info_ref = nullptr;
        }
        app::KuOriMounting__Class** type_info = &type_info_ref;
        inline app::KuOriMounting__Class* get_class() {
            return il2cpp::get_class<app::KuOriMounting__Class>(type_info, "", "KuOriMounting");
        }
        inline app::KuOriMounting* create() {
            return il2cpp::create_object<app::KuOriMounting>(get_class());
        }
    } // namespace KuOriMounting
} // namespace app::classes::types
