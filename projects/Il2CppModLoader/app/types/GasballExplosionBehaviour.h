#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballExplosionBehaviour {
        namespace {
            app::GasballExplosionBehaviour__Class* type_info_ref = nullptr;
        }
        app::GasballExplosionBehaviour__Class** type_info = &type_info_ref;
        inline app::GasballExplosionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballExplosionBehaviour__Class>(type_info, "", "GasballExplosionBehaviour");
        }
        inline app::GasballExplosionBehaviour* create() {
            return il2cpp::create_object<app::GasballExplosionBehaviour>(get_class());
        }
    } // namespace GasballExplosionBehaviour
} // namespace app::classes::types
