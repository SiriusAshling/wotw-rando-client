#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_MinMaxCurve {
        namespace {
            app::ParticleSystem_MinMaxCurve__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_MinMaxCurve__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_MinMaxCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_MinMaxCurve__Class>(type_info, "UnityEngine", "ParticleSystem", "MinMaxCurve");
        }
        inline app::ParticleSystem_MinMaxCurve* create() {
            return il2cpp::create_object<app::ParticleSystem_MinMaxCurve>(get_class());
        }
        inline app::ParticleSystem_MinMaxCurve__Boxed* box(app::ParticleSystem_MinMaxCurve value) {
            return il2cpp::box_value<app::ParticleSystem_MinMaxCurve__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_MinMaxCurve
} // namespace app::classes::types