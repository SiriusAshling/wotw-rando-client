#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsInZoneCondition {
        namespace {
            app::IsInZoneCondition__Class* type_info_ref = nullptr;
        }
        app::IsInZoneCondition__Class** type_info = &type_info_ref;
        inline app::IsInZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInZoneCondition__Class>(type_info, "", "IsInZoneCondition");
        }
        inline app::IsInZoneCondition* create() {
            return il2cpp::create_object<app::IsInZoneCondition>(get_class());
        }
    } // namespace IsInZoneCondition
} // namespace app::classes::types
