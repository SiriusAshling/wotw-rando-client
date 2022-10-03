#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_TextureQuality__Enum {
        namespace {
            app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "TextureQuality");
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_TextureQuality__Enum>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array>(get_class(), size);
        }
    } // namespace MoonRenderPipelineDebugUI_TextureQuality__Enum
} // namespace app::classes::types
