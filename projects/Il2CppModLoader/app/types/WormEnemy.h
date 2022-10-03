#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormEnemy {
        namespace {
            app::WormEnemy__Class* type_info_ref = nullptr;
        }
        app::WormEnemy__Class** type_info = &type_info_ref;
        inline app::WormEnemy__Class* get_class() {
            return il2cpp::get_class<app::WormEnemy__Class>(type_info, "", "WormEnemy");
        }
        inline app::WormEnemy* create() {
            return il2cpp::create_object<app::WormEnemy>(get_class());
        }
    } // namespace WormEnemy
} // namespace app::classes::types
