#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeRenderModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_FreeRenderModel__Class** type_info;
        inline app::IVRRenderModels_FreeRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeRenderModel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeRenderModel");
        }
        inline app::IVRRenderModels_FreeRenderModel* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeRenderModel>(get_class());
        }
    } // namespace IVRRenderModels_FreeRenderModel
} // namespace app::classes::types
