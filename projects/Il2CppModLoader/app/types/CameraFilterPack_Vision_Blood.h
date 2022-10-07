#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Blood {
        namespace {
            app::CameraFilterPack_Vision_Blood__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Vision_Blood__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Vision_Blood__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Blood__Class>(type_info, "", "CameraFilterPack_Vision_Blood");
        }
        inline app::CameraFilterPack_Vision_Blood* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Blood>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Blood
} // namespace app::classes::types