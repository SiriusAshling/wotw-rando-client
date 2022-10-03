#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationSupportedMimeTypes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationSupportedMimeTypes__Class** type_info;
        inline app::IVRApplications_GetApplicationSupportedMimeTypes__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationSupportedMimeTypes__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationSupportedMimeTypes");
        }
        inline app::IVRApplications_GetApplicationSupportedMimeTypes* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationSupportedMimeTypes>(get_class());
        }
    } // namespace IVRApplications_GetApplicationSupportedMimeTypes
} // namespace app::classes::types
