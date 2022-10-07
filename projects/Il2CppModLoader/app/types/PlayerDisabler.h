#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDisabler {
        namespace {
            app::PlayerDisabler__Class* type_info_ref = nullptr;
        }
        app::PlayerDisabler__Class** type_info = &type_info_ref;
        inline app::PlayerDisabler__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisabler__Class>(type_info, "", "PlayerDisabler");
        }
        inline app::PlayerDisabler* create() {
            return il2cpp::create_object<app::PlayerDisabler>(get_class());
        }
    } // namespace PlayerDisabler
} // namespace app::classes::types