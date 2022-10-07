#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionDetectionMode__Enum {
        namespace {
            app::CollisionDetectionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CollisionDetectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::CollisionDetectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollisionDetectionMode__Enum__Class>(type_info, "UnityEngine", "CollisionDetectionMode");
        }
        inline app::CollisionDetectionMode__Enum* create() {
            return il2cpp::create_object<app::CollisionDetectionMode__Enum>(get_class());
        }
    } // namespace CollisionDetectionMode__Enum
} // namespace app::classes::types