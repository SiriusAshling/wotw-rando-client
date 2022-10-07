#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectileEffect {
        namespace {
            app::ChakramProjectileEffect__Class* type_info_ref = nullptr;
        }
        app::ChakramProjectileEffect__Class** type_info = &type_info_ref;
        inline app::ChakramProjectileEffect__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectileEffect__Class>(type_info, "", "ChakramProjectileEffect");
        }
        inline app::ChakramProjectileEffect* create() {
            return il2cpp::create_object<app::ChakramProjectileEffect>(get_class());
        }
    } // namespace ChakramProjectileEffect
} // namespace app::classes::types