#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingOverrides {
        namespace {
            app::CameraSettingOverrides__Class* type_info_ref = nullptr;
        }
        app::CameraSettingOverrides__Class** type_info = &type_info_ref;
        inline app::CameraSettingOverrides__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingOverrides__Class>(type_info, "", "CameraSettingOverrides");
        }
        inline app::CameraSettingOverrides* create() {
            return il2cpp::create_object<app::CameraSettingOverrides>(get_class());
        }
        inline app::CameraSettingOverrides__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingOverrides__Array>(get_class(), size);
        }
        inline app::CameraSettingOverrides__Array* create_array(const std::vector<app::CameraSettingOverrides*>& items) {
            return il2cpp::array_new<app::CameraSettingOverrides__Array>(get_class(), items);
        }
    } // namespace CameraSettingOverrides
} // namespace app::classes::types