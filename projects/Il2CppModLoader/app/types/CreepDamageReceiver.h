#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreepDamageReceiver {
        namespace {
            app::CreepDamageReceiver__Class* type_info_ref = nullptr;
        }
        app::CreepDamageReceiver__Class** type_info = &type_info_ref;
        inline app::CreepDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::CreepDamageReceiver__Class>(type_info, "", "CreepDamageReceiver");
        }
        inline app::CreepDamageReceiver* create() {
            return il2cpp::create_object<app::CreepDamageReceiver>(get_class());
        }
    } // namespace CreepDamageReceiver
} // namespace app::classes::types