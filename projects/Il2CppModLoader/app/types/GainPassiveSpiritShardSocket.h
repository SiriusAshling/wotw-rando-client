#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GainPassiveSpiritShardSocket {
        namespace {
            app::GainPassiveSpiritShardSocket__Class* type_info_ref = nullptr;
        }
        app::GainPassiveSpiritShardSocket__Class** type_info = &type_info_ref;
        inline app::GainPassiveSpiritShardSocket__Class* get_class() {
            return il2cpp::get_class<app::GainPassiveSpiritShardSocket__Class>(type_info, "", "GainPassiveSpiritShardSocket");
        }
        inline app::GainPassiveSpiritShardSocket* create() {
            return il2cpp::create_object<app::GainPassiveSpiritShardSocket>(get_class());
        }
    } // namespace GainPassiveSpiritShardSocket
} // namespace app::classes::types