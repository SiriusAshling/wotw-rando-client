#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerGenericAttackable {
        namespace {
            app::ServerGenericAttackable__Class* type_info_ref = nullptr;
        }
        app::ServerGenericAttackable__Class** type_info = &type_info_ref;
        inline app::ServerGenericAttackable__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericAttackable__Class>(type_info, "", "ServerGenericAttackable");
        }
        inline app::ServerGenericAttackable* create() {
            return il2cpp::create_object<app::ServerGenericAttackable>(get_class());
        }
    } // namespace ServerGenericAttackable
} // namespace app::classes::types
