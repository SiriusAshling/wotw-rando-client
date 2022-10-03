#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartStopper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartStopper__Class** type_info;
        inline app::CartStopper__Class* get_class() {
            return il2cpp::get_class<app::CartStopper__Class>(type_info, "", "CartStopper");
        }
        inline app::CartStopper* create() {
            return il2cpp::create_object<app::CartStopper>(get_class());
        }
        inline app::CartStopper__Array* create_array(int size) {
            return il2cpp::array_new<app::CartStopper__Array>(get_class(), size);
        }
    } // namespace CartStopper
} // namespace app::classes::types
