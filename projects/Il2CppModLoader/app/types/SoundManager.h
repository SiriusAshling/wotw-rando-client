#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundManager {
        namespace {
            app::SoundManager__Class* type_info_ref = nullptr;
        }
        app::SoundManager__Class** type_info = &type_info_ref;
        inline app::SoundManager__Class* get_class() {
            return il2cpp::get_class<app::SoundManager__Class>(type_info, "", "SoundManager");
        }
        inline app::SoundManager* create() {
            return il2cpp::create_object<app::SoundManager>(get_class());
        }
    } // namespace SoundManager
} // namespace app::classes::types