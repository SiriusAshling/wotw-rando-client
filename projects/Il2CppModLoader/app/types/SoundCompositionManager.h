#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionManager {
        namespace {
            app::SoundCompositionManager__Class* type_info_ref = nullptr;
        }
        app::SoundCompositionManager__Class** type_info = &type_info_ref;
        inline app::SoundCompositionManager__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionManager__Class>(type_info, "", "SoundCompositionManager");
        }
        inline app::SoundCompositionManager* create() {
            return il2cpp::create_object<app::SoundCompositionManager>(get_class());
        }
    } // namespace SoundCompositionManager
} // namespace app::classes::types