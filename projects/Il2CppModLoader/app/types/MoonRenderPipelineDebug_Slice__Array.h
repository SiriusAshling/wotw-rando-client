#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug_Slice__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineDebug_Slice__Array__Class** type_info;
        inline app::MoonRenderPipelineDebug_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebug_Slice__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebug+Slice[]");
        }
        inline app::MoonRenderPipelineDebug_Slice__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug_Slice__Array>(get_class());
        }
    } // namespace MoonRenderPipelineDebug_Slice__Array
} // namespace app::classes::types
