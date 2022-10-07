#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterCinematic {
        namespace {
            app::CharacterCinematic__Class* type_info_ref = nullptr;
        }
        app::CharacterCinematic__Class** type_info = &type_info_ref;
        inline app::CharacterCinematic__Class* get_class() {
            return il2cpp::get_class<app::CharacterCinematic__Class>(type_info, "", "CharacterCinematic");
        }
        inline app::CharacterCinematic* create() {
            return il2cpp::create_object<app::CharacterCinematic>(get_class());
        }
    } // namespace CharacterCinematic
} // namespace app::classes::types