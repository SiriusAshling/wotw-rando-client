#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_SetDisplayVisibility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_SetDisplayVisibility__Class** type_info;
        inline app::IVRSystem_SetDisplayVisibility__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_SetDisplayVisibility__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_SetDisplayVisibility");
        }
        inline app::IVRSystem_SetDisplayVisibility* create() {
            return il2cpp::create_object<app::IVRSystem_SetDisplayVisibility>(get_class());
        }
    } // namespace IVRSystem_SetDisplayVisibility
} // namespace app::classes::types
