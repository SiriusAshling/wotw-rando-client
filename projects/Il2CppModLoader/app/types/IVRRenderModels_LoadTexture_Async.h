#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_LoadTexture_Async {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_LoadTexture_Async__Class** type_info;
        inline app::IVRRenderModels_LoadTexture_Async__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_LoadTexture_Async__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_LoadTexture_Async");
        }
        inline app::IVRRenderModels_LoadTexture_Async* create() {
            return il2cpp::create_object<app::IVRRenderModels_LoadTexture_Async>(get_class());
        }
    } // namespace IVRRenderModels_LoadTexture_Async
} // namespace app::classes::types