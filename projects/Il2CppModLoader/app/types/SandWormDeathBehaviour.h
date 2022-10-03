#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormDeathBehaviour {
        namespace {
            app::SandWormDeathBehaviour__Class* type_info_ref = nullptr;
        }
        app::SandWormDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormDeathBehaviour__Class>(type_info, "", "SandWormDeathBehaviour");
        }
        inline app::SandWormDeathBehaviour* create() {
            return il2cpp::create_object<app::SandWormDeathBehaviour>(get_class());
        }
    } // namespace SandWormDeathBehaviour
} // namespace app::classes::types
