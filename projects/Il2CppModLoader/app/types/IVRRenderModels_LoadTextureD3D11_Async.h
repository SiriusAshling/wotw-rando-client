#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_LoadTextureD3D11_Async {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_LoadTextureD3D11_Async__Class** type_info;
        inline app::IVRRenderModels_LoadTextureD3D11_Async__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_LoadTextureD3D11_Async__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_LoadTextureD3D11_Async");
        }
        inline app::IVRRenderModels_LoadTextureD3D11_Async* create() {
            return il2cpp::create_object<app::IVRRenderModels_LoadTextureD3D11_Async>(get_class());
        }
    } // namespace IVRRenderModels_LoadTextureD3D11_Async
} // namespace app::classes::types
