#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Initialization {
        namespace {
            app::Initialization__Class* type_info_ref = nullptr;
        }
        app::Initialization__Class** type_info = &type_info_ref;
        inline app::Initialization__Class* get_class() {
            return il2cpp::get_class<app::Initialization__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Initialization");
        }
        inline app::Initialization* create() {
            return il2cpp::create_object<app::Initialization>(get_class());
        }
        inline app::Initialization__Boxed* box(app::Initialization value) {
            return il2cpp::box_value<app::Initialization__Boxed>(get_class(), value);
        }
    } // namespace Initialization
} // namespace app::classes::types