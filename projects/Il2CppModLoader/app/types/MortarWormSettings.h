#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormSettings {
        namespace {
            app::MortarWormSettings__Class* type_info_ref = nullptr;
        }
        app::MortarWormSettings__Class** type_info = &type_info_ref;
        inline app::MortarWormSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarWormSettings__Class>(type_info, "", "MortarWormSettings");
        }
        inline app::MortarWormSettings* create() {
            return il2cpp::create_object<app::MortarWormSettings>(get_class());
        }
    } // namespace MortarWormSettings
} // namespace app::classes::types
