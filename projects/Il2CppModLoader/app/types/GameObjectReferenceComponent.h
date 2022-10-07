#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectReferenceComponent {
        namespace {
            app::GameObjectReferenceComponent__Class* type_info_ref = nullptr;
        }
        app::GameObjectReferenceComponent__Class** type_info = &type_info_ref;
        inline app::GameObjectReferenceComponent__Class* get_class() {
            return il2cpp::get_class<app::GameObjectReferenceComponent__Class>(type_info, "", "GameObjectReferenceComponent");
        }
        inline app::GameObjectReferenceComponent* create() {
            return il2cpp::create_object<app::GameObjectReferenceComponent>(get_class());
        }
    } // namespace GameObjectReferenceComponent
} // namespace app::classes::types