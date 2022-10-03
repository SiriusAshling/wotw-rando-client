#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePuppet__Array {
        namespace {
            app::CharacterStatePuppet__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterStatePuppet__Array__Class** type_info = &type_info_ref;
        inline app::CharacterStatePuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePuppet__Array__Class>(type_info, "", "CharacterStatePuppet[]");
        }
        inline app::CharacterStatePuppet__Array* create() {
            return il2cpp::create_object<app::CharacterStatePuppet__Array>(get_class());
        }
    } // namespace CharacterStatePuppet__Array
} // namespace app::classes::types
