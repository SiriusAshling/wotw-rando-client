#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WideScreenAdjustmentSettings {
        namespace {
            app::WideScreenAdjustmentSettings__Class* type_info_ref = nullptr;
        }
        app::WideScreenAdjustmentSettings__Class** type_info = &type_info_ref;
        inline app::WideScreenAdjustmentSettings__Class* get_class() {
            return il2cpp::get_class<app::WideScreenAdjustmentSettings__Class>(type_info, "", "WideScreenAdjustmentSettings");
        }
        inline app::WideScreenAdjustmentSettings* create() {
            return il2cpp::create_object<app::WideScreenAdjustmentSettings>(get_class());
        }
    } // namespace WideScreenAdjustmentSettings
} // namespace app::classes::types