#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FinalPost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView_FinalPost__Class** type_info;
        inline app::MoonRenderPipelineView_FinalPost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FinalPost__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "FinalPost");
        }
        inline app::MoonRenderPipelineView_FinalPost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_FinalPost>(get_class());
        }
    } // namespace MoonRenderPipelineView_FinalPost
} // namespace app::classes::types