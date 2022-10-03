#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider {
        namespace {
            app::OneWayCapsuleCollider__Class* type_info_ref = nullptr;
        }
        app::OneWayCapsuleCollider__Class** type_info = &type_info_ref;
        inline app::OneWayCapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::OneWayCapsuleCollider__Class>(type_info, "", "OneWayCapsuleCollider");
        }
        inline app::OneWayCapsuleCollider* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider>(get_class());
        }
    } // namespace OneWayCapsuleCollider
} // namespace app::classes::types
