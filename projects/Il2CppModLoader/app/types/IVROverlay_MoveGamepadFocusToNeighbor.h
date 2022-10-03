#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_MoveGamepadFocusToNeighbor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_MoveGamepadFocusToNeighbor__Class** type_info;
        inline app::IVROverlay_MoveGamepadFocusToNeighbor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_MoveGamepadFocusToNeighbor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_MoveGamepadFocusToNeighbor");
        }
        inline app::IVROverlay_MoveGamepadFocusToNeighbor* create() {
            return il2cpp::create_object<app::IVROverlay_MoveGamepadFocusToNeighbor>(get_class());
        }
    } // namespace IVROverlay_MoveGamepadFocusToNeighbor
} // namespace app::classes::types
