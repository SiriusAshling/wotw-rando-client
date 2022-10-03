#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFireburstSpell {
        namespace {
            app::SeinFireburstSpell__Class* type_info_ref = nullptr;
        }
        app::SeinFireburstSpell__Class** type_info = &type_info_ref;
        inline app::SeinFireburstSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFireburstSpell__Class>(type_info, "", "SeinFireburstSpell");
        }
        inline app::SeinFireburstSpell* create() {
            return il2cpp::create_object<app::SeinFireburstSpell>(get_class());
        }
    } // namespace SeinFireburstSpell
} // namespace app::classes::types
