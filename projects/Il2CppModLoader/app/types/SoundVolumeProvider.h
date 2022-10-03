#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundVolumeProvider {
        namespace {
            app::SoundVolumeProvider__Class* type_info_ref = nullptr;
        }
        app::SoundVolumeProvider__Class** type_info = &type_info_ref;
        inline app::SoundVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeProvider__Class>(type_info, "", "SoundVolumeProvider");
        }
        inline app::SoundVolumeProvider* create() {
            return il2cpp::create_object<app::SoundVolumeProvider>(get_class());
        }
    } // namespace SoundVolumeProvider
} // namespace app::classes::types
