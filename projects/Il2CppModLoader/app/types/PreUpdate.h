#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreUpdate {
        namespace {
            app::PreUpdate__Class* type_info_ref = nullptr;
        }
        app::PreUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate__Class* get_class() {
            return il2cpp::get_class<app::PreUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate");
        }
        inline app::PreUpdate* create() {
            return il2cpp::create_object<app::PreUpdate>(get_class());
        }
        inline app::PreUpdate__Boxed* box(app::PreUpdate value) {
            return il2cpp::box_value<app::PreUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate
} // namespace app::classes::types