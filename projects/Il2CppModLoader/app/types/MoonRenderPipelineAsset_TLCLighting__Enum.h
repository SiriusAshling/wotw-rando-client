#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_TLCLighting__Enum {
        namespace {
            app::MoonRenderPipelineAsset_TLCLighting__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineAsset_TLCLighting__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_TLCLighting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_TLCLighting__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "TLCLighting");
        }
        inline app::MoonRenderPipelineAsset_TLCLighting__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_TLCLighting__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_TLCLighting__Enum
} // namespace app::classes::types