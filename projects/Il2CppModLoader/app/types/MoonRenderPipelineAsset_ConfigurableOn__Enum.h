#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_ConfigurableOn__Enum {
        namespace {
            app::MoonRenderPipelineAsset_ConfigurableOn__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineAsset_ConfigurableOn__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_ConfigurableOn__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_ConfigurableOn__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "ConfigurableOn");
        }
        inline app::MoonRenderPipelineAsset_ConfigurableOn__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_ConfigurableOn__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_ConfigurableOn__Enum
} // namespace app::classes::types
