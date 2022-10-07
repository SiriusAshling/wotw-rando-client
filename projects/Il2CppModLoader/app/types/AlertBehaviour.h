#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlertBehaviour {
        namespace {
            app::AlertBehaviour__Class* type_info_ref = nullptr;
        }
        app::AlertBehaviour__Class** type_info = &type_info_ref;
        inline app::AlertBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AlertBehaviour__Class>(type_info, "Moon", "AlertBehaviour");
        }
        inline app::AlertBehaviour* create() {
            return il2cpp::create_object<app::AlertBehaviour>(get_class());
        }
    } // namespace AlertBehaviour
} // namespace app::classes::types