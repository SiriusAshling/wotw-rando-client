#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetInSpiderBossLocationZoneCondition {
        namespace {
            app::TargetInSpiderBossLocationZoneCondition__Class* type_info_ref = nullptr;
        }
        app::TargetInSpiderBossLocationZoneCondition__Class** type_info = &type_info_ref;
        inline app::TargetInSpiderBossLocationZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::TargetInSpiderBossLocationZoneCondition__Class>(type_info, "", "TargetInSpiderBossLocationZoneCondition");
        }
        inline app::TargetInSpiderBossLocationZoneCondition* create() {
            return il2cpp::create_object<app::TargetInSpiderBossLocationZoneCondition>(get_class());
        }
    } // namespace TargetInSpiderBossLocationZoneCondition
} // namespace app::classes::types