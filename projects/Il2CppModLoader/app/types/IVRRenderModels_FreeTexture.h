#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_FreeTexture__Class** type_info;
        inline app::IVRRenderModels_FreeTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeTexture");
        }
        inline app::IVRRenderModels_FreeTexture* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeTexture>(get_class());
        }
    } // namespace IVRRenderModels_FreeTexture
} // namespace app::classes::types
