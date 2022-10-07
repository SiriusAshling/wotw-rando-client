#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_ColorOverLifetimeModule {
        namespace {
            app::ParticleSystem_ColorOverLifetimeModule__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_ColorOverLifetimeModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_ColorOverLifetimeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_ColorOverLifetimeModule__Class>(type_info, "UnityEngine", "ParticleSystem", "ColorOverLifetimeModule");
        }
        inline app::ParticleSystem_ColorOverLifetimeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_ColorOverLifetimeModule>(get_class());
        }
        inline app::ParticleSystem_ColorOverLifetimeModule__Boxed* box(app::ParticleSystem_ColorOverLifetimeModule value) {
            return il2cpp::box_value<app::ParticleSystem_ColorOverLifetimeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_ColorOverLifetimeModule
} // namespace app::classes::types