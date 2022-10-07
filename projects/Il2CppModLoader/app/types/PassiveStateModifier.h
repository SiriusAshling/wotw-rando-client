#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PassiveStateModifier {
        namespace {
            app::PassiveStateModifier__Class* type_info_ref = nullptr;
        }
        app::PassiveStateModifier__Class** type_info = &type_info_ref;
        inline app::PassiveStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PassiveStateModifier__Class>(type_info, "", "PassiveStateModifier");
        }
        inline app::PassiveStateModifier* create() {
            return il2cpp::create_object<app::PassiveStateModifier>(get_class());
        }
    } // namespace PassiveStateModifier
} // namespace app::classes::types