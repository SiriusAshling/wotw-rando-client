#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryParameters__Array {
        namespace {
            app::RendererCullingCategoryParameters__Array__Class* type_info_ref = nullptr;
        }
        app::RendererCullingCategoryParameters__Array__Class** type_info = &type_info_ref;
        inline app::RendererCullingCategoryParameters__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryParameters__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingCategoryParameters[]");
        }
        inline app::RendererCullingCategoryParameters__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryParameters__Array>(get_class());
        }
    } // namespace RendererCullingCategoryParameters__Array
} // namespace app::classes::types
