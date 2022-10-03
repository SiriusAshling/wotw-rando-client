#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlaySortOrder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlaySortOrder__Class** type_info;
        inline app::IVROverlay_GetOverlaySortOrder__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlaySortOrder__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlaySortOrder");
        }
        inline app::IVROverlay_GetOverlaySortOrder* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlaySortOrder>(get_class());
        }
    } // namespace IVROverlay_GetOverlaySortOrder
} // namespace app::classes::types
