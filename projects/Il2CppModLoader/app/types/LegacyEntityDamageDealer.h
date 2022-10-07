#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEntityDamageDealer {
        namespace {
            app::LegacyEntityDamageDealer__Class* type_info_ref = nullptr;
        }
        app::LegacyEntityDamageDealer__Class** type_info = &type_info_ref;
        inline app::LegacyEntityDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageDealer__Class>(type_info, "", "LegacyEntityDamageDealer");
        }
        inline app::LegacyEntityDamageDealer* create() {
            return il2cpp::create_object<app::LegacyEntityDamageDealer>(get_class());
        }
    } // namespace LegacyEntityDamageDealer
} // namespace app::classes::types