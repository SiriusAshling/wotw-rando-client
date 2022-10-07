#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilities {
        namespace {
            app::PlayerAbilities__Class* type_info_ref = nullptr;
        }
        app::PlayerAbilities__Class** type_info = &type_info_ref;
        inline app::PlayerAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilities__Class>(type_info, "", "PlayerAbilities");
        }
        inline app::PlayerAbilities* create() {
            return il2cpp::create_object<app::PlayerAbilities>(get_class());
        }
    } // namespace PlayerAbilities
} // namespace app::classes::types