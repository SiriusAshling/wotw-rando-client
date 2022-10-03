#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZoneScalingData {
        namespace {
            app::ZoneScalingData__Class* type_info_ref = nullptr;
        }
        app::ZoneScalingData__Class** type_info = &type_info_ref;
        inline app::ZoneScalingData__Class* get_class() {
            return il2cpp::get_class<app::ZoneScalingData__Class>(type_info, "", "ZoneScalingData");
        }
        inline app::ZoneScalingData* create() {
            return il2cpp::create_object<app::ZoneScalingData>(get_class());
        }
    } // namespace ZoneScalingData
} // namespace app::classes::types
