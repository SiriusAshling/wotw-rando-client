#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetPrimaryDashboardDevice {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetPrimaryDashboardDevice__Class** type_info;
        inline app::IVROverlay_GetPrimaryDashboardDevice__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetPrimaryDashboardDevice__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetPrimaryDashboardDevice");
        }
        inline app::IVROverlay_GetPrimaryDashboardDevice* create() {
            return il2cpp::create_object<app::IVROverlay_GetPrimaryDashboardDevice>(get_class());
        }
    } // namespace IVROverlay_GetPrimaryDashboardDevice
} // namespace app::classes::types