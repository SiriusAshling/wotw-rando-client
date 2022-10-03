#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_FindOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_FindOverlay__Class** type_info;
        inline app::IVROverlay_FindOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_FindOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_FindOverlay");
        }
        inline app::IVROverlay_FindOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_FindOverlay>(get_class());
        }
    } // namespace IVROverlay_FindOverlay
} // namespace app::classes::types
