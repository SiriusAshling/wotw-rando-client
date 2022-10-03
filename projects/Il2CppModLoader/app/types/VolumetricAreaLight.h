#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumetricAreaLight {
        namespace {
            app::VolumetricAreaLight__Class* type_info_ref = nullptr;
        }
        app::VolumetricAreaLight__Class** type_info = &type_info_ref;
        inline app::VolumetricAreaLight__Class* get_class() {
            return il2cpp::get_class<app::VolumetricAreaLight__Class>(type_info, "Moon.Rendering", "VolumetricAreaLight");
        }
        inline app::VolumetricAreaLight* create() {
            return il2cpp::create_object<app::VolumetricAreaLight>(get_class());
        }
        inline app::VolumetricAreaLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumetricAreaLight__Array>(get_class(), size);
        }
    } // namespace VolumetricAreaLight
} // namespace app::classes::types
