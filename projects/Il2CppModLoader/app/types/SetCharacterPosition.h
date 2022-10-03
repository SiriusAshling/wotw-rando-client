#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetCharacterPosition {
        namespace {
            app::SetCharacterPosition__Class* type_info_ref = nullptr;
        }
        app::SetCharacterPosition__Class** type_info = &type_info_ref;
        inline app::SetCharacterPosition__Class* get_class() {
            return il2cpp::get_class<app::SetCharacterPosition__Class>(type_info, "", "SetCharacterPosition");
        }
        inline app::SetCharacterPosition* create() {
            return il2cpp::create_object<app::SetCharacterPosition>(get_class());
        }
    } // namespace SetCharacterPosition
} // namespace app::classes::types
