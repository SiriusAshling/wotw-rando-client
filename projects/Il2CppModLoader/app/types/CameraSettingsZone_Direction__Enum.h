#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone_Direction__Enum {
        namespace {
            app::CameraSettingsZone_Direction__Enum__Class* type_info_ref = nullptr;
        }
        app::CameraSettingsZone_Direction__Enum__Class** type_info = &type_info_ref;
        inline app::CameraSettingsZone_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettingsZone_Direction__Enum__Class>(type_info, "", "CameraSettingsZone", "Direction");
        }
        inline app::CameraSettingsZone_Direction__Enum* create() {
            return il2cpp::create_object<app::CameraSettingsZone_Direction__Enum>(get_class());
        }
    } // namespace CameraSettingsZone_Direction__Enum
} // namespace app::classes::types
