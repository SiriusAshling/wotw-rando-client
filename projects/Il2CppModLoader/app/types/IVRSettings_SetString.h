#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_SetString__Class** type_info;
        inline app::IVRSettings_SetString__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetString__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetString");
        }
        inline app::IVRSettings_SetString* create() {
            return il2cpp::create_object<app::IVRSettings_SetString>(get_class());
        }
    } // namespace IVRSettings_SetString
} // namespace app::classes::types