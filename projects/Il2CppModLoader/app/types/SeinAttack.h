#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAttack {
        namespace {
            app::SeinAttack__Class* type_info_ref = nullptr;
        }
        app::SeinAttack__Class** type_info = &type_info_ref;
        inline app::SeinAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinAttack__Class>(type_info, "", "SeinAttack");
        }
        inline app::SeinAttack* create() {
            return il2cpp::create_object<app::SeinAttack>(get_class());
        }
    } // namespace SeinAttack
} // namespace app::classes::types