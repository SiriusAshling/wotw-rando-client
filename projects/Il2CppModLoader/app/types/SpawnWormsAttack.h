#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnWormsAttack {
        namespace {
            app::SpawnWormsAttack__Class* type_info_ref = nullptr;
        }
        app::SpawnWormsAttack__Class** type_info = &type_info_ref;
        inline app::SpawnWormsAttack__Class* get_class() {
            return il2cpp::get_class<app::SpawnWormsAttack__Class>(type_info, "", "SpawnWormsAttack");
        }
        inline app::SpawnWormsAttack* create() {
            return il2cpp::create_object<app::SpawnWormsAttack>(get_class());
        }
    } // namespace SpawnWormsAttack
} // namespace app::classes::types
