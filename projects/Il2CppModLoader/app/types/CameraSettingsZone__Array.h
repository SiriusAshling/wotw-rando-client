#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone__Array {
        namespace {
            app::CameraSettingsZone__Array__Class* type_info_ref = nullptr;
        }
        app::CameraSettingsZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraSettingsZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZone__Array__Class>(type_info, "", "CameraSettingsZone[]");
        }
        inline app::CameraSettingsZone__Array* create() {
            return il2cpp::create_object<app::CameraSettingsZone__Array>(get_class());
        }
    } // namespace CameraSettingsZone__Array
} // namespace app::classes::types
