#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundComposition {
        namespace {
            app::SoundComposition__Class* type_info_ref = nullptr;
        }
        app::SoundComposition__Class** type_info = &type_info_ref;
        inline app::SoundComposition__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition__Class>(type_info, "", "SoundComposition");
        }
        inline app::SoundComposition* create() {
            return il2cpp::create_object<app::SoundComposition>(get_class());
        }
    } // namespace SoundComposition
} // namespace app::classes::types