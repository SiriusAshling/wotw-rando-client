#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellInventory {
        namespace {
            app::SpellInventory__Class* type_info_ref = nullptr;
        }
        app::SpellInventory__Class** type_info = &type_info_ref;
        inline app::SpellInventory__Class* get_class() {
            return il2cpp::get_class<app::SpellInventory__Class>(type_info, "", "SpellInventory");
        }
        inline app::SpellInventory* create() {
            return il2cpp::create_object<app::SpellInventory>(get_class());
        }
    } // namespace SpellInventory
} // namespace app::classes::types