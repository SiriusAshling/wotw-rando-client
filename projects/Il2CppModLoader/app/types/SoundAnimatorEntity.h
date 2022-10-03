#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundAnimatorEntity {
        namespace {
            app::SoundAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::SoundAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::SoundAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimatorEntity__Class>(type_info, "Moon.Timeline", "SoundAnimatorEntity");
        }
        inline app::SoundAnimatorEntity* create() {
            return il2cpp::create_object<app::SoundAnimatorEntity>(get_class());
        }
    } // namespace SoundAnimatorEntity
} // namespace app::classes::types
