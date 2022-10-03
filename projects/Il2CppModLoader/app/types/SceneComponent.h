#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneComponent {
        namespace {
            app::SceneComponent__Class* type_info_ref = nullptr;
        }
        app::SceneComponent__Class** type_info = &type_info_ref;
        inline app::SceneComponent__Class* get_class() {
            return il2cpp::get_class<app::SceneComponent__Class>(type_info, "Moon.SceneManagement", "SceneComponent");
        }
        inline app::SceneComponent* create() {
            return il2cpp::create_object<app::SceneComponent>(get_class());
        }
    } // namespace SceneComponent
} // namespace app::classes::types
