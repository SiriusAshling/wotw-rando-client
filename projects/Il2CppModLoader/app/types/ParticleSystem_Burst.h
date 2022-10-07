#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_Burst {
        namespace {
            app::ParticleSystem_Burst__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_Burst__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_Burst__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_Burst__Class>(type_info, "UnityEngine", "ParticleSystem", "Burst");
        }
        inline app::ParticleSystem_Burst* create() {
            return il2cpp::create_object<app::ParticleSystem_Burst>(get_class());
        }
        inline app::ParticleSystem_Burst__Boxed* box(app::ParticleSystem_Burst value) {
            return il2cpp::box_value<app::ParticleSystem_Burst__Boxed>(get_class(), value);
        }
        inline app::ParticleSystem_Burst__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystem_Burst__Array>(get_class(), size);
        }
        inline app::ParticleSystem_Burst__Array* create_array(const std::vector<app::ParticleSystem_Burst>& items) {
            return il2cpp::array_new<app::ParticleSystem_Burst__Array>(get_class(), items);
        }
    } // namespace ParticleSystem_Burst
} // namespace app::classes::types