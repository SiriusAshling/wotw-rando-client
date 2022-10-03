#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossRaceHandler {
        namespace {
            app::BossRaceHandler__Class* type_info_ref = nullptr;
        }
        app::BossRaceHandler__Class** type_info = &type_info_ref;
        inline app::BossRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::BossRaceHandler__Class>(type_info, "", "BossRaceHandler");
        }
        inline app::BossRaceHandler* create() {
            return il2cpp::create_object<app::BossRaceHandler>(get_class());
        }
    } // namespace BossRaceHandler
} // namespace app::classes::types
