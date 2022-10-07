#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingCollisionBoundsInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class** type_info;
        inline app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingCollisionBoundsInfo
} // namespace app::classes::types