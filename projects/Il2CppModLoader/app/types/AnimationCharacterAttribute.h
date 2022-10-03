#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationCharacterAttribute {
        namespace {
            app::AnimationCharacterAttribute__Class* type_info_ref = nullptr;
        }
        app::AnimationCharacterAttribute__Class** type_info = &type_info_ref;
        inline app::AnimationCharacterAttribute__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterAttribute__Class>(type_info, "Moon", "AnimationCharacterAttribute");
        }
        inline app::AnimationCharacterAttribute* create() {
            return il2cpp::create_object<app::AnimationCharacterAttribute>(get_class());
        }
    } // namespace AnimationCharacterAttribute
} // namespace app::classes::types
