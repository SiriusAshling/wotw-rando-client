#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandTrail {
        namespace {
            app::SandTrail__Class* type_info_ref = nullptr;
        }
        app::SandTrail__Class** type_info = &type_info_ref;
        inline app::SandTrail__Class* get_class() {
            return il2cpp::get_class<app::SandTrail__Class>(type_info, "Moon", "SandTrail");
        }
        inline app::SandTrail* create() {
            return il2cpp::create_object<app::SandTrail>(get_class());
        }
    } // namespace SandTrail
} // namespace app::classes::types