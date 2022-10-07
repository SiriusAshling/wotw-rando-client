#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackCeiling {
        namespace {
            app::SpiderBossLaserAttackCeiling__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLaserAttackCeiling__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttackCeiling__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackCeiling__Class>(type_info, "", "SpiderBossLaserAttackCeiling");
        }
        inline app::SpiderBossLaserAttackCeiling* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackCeiling>(get_class());
        }
    } // namespace SpiderBossLaserAttackCeiling
} // namespace app::classes::types