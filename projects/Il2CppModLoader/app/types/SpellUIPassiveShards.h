#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIPassiveShards {
        namespace {
            app::SpellUIPassiveShards__Class* type_info_ref = nullptr;
        }
        app::SpellUIPassiveShards__Class** type_info = &type_info_ref;
        inline app::SpellUIPassiveShards__Class* get_class() {
            return il2cpp::get_class<app::SpellUIPassiveShards__Class>(type_info, "", "SpellUIPassiveShards");
        }
        inline app::SpellUIPassiveShards* create() {
            return il2cpp::create_object<app::SpellUIPassiveShards>(get_class());
        }
    } // namespace SpellUIPassiveShards
} // namespace app::classes::types