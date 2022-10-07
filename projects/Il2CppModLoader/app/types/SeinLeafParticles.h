#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLeafParticles {
        namespace {
            app::SeinLeafParticles__Class* type_info_ref = nullptr;
        }
        app::SeinLeafParticles__Class** type_info = &type_info_ref;
        inline app::SeinLeafParticles__Class* get_class() {
            return il2cpp::get_class<app::SeinLeafParticles__Class>(type_info, "", "SeinLeafParticles");
        }
        inline app::SeinLeafParticles* create() {
            return il2cpp::create_object<app::SeinLeafParticles>(get_class());
        }
    } // namespace SeinLeafParticles
} // namespace app::classes::types