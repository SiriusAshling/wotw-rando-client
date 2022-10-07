#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardListOverlay {
        namespace {
            app::SpellUIShardListOverlay__Class* type_info_ref = nullptr;
        }
        app::SpellUIShardListOverlay__Class** type_info = &type_info_ref;
        inline app::SpellUIShardListOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardListOverlay__Class>(type_info, "", "SpellUIShardListOverlay");
        }
        inline app::SpellUIShardListOverlay* create() {
            return il2cpp::create_object<app::SpellUIShardListOverlay>(get_class());
        }
    } // namespace SpellUIShardListOverlay
} // namespace app::classes::types