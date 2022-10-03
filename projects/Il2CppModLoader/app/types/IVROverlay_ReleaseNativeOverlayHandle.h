#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ReleaseNativeOverlayHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_ReleaseNativeOverlayHandle__Class** type_info;
        inline app::IVROverlay_ReleaseNativeOverlayHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ReleaseNativeOverlayHandle__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ReleaseNativeOverlayHandle");
        }
        inline app::IVROverlay_ReleaseNativeOverlayHandle* create() {
            return il2cpp::create_object<app::IVROverlay_ReleaseNativeOverlayHandle>(get_class());
        }
    } // namespace IVROverlay_ReleaseNativeOverlayHandle
} // namespace app::classes::types
