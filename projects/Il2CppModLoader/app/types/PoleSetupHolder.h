#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoleSetupHolder {
        namespace {
            app::PoleSetupHolder__Class* type_info_ref = nullptr;
        }
        app::PoleSetupHolder__Class** type_info = &type_info_ref;
        inline app::PoleSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupHolder__Class>(type_info, "Game", "PoleSetupHolder");
        }
        inline app::PoleSetupHolder* create() {
            return il2cpp::create_object<app::PoleSetupHolder>(get_class());
        }
    } // namespace PoleSetupHolder
} // namespace app::classes::types