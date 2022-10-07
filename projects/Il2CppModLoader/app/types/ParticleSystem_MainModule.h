#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_MainModule {
        namespace {
            app::ParticleSystem_MainModule__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_MainModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_MainModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_MainModule__Class>(type_info, "UnityEngine", "ParticleSystem", "MainModule");
        }
        inline app::ParticleSystem_MainModule* create() {
            return il2cpp::create_object<app::ParticleSystem_MainModule>(get_class());
        }
        inline app::ParticleSystem_MainModule__Boxed* box(app::ParticleSystem_MainModule value) {
            return il2cpp::box_value<app::ParticleSystem_MainModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_MainModule
} // namespace app::classes::types