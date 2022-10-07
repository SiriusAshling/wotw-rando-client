#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData__Array {
        namespace {
            app::DistortionAnimator_RendererData__Array__Class* type_info_ref = nullptr;
        }
        app::DistortionAnimator_RendererData__Array__Class** type_info = &type_info_ref;
        inline app::DistortionAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::DistortionAnimator_RendererData__Array__Class>(type_info, "", "DistortionAnimator+RendererData[]");
        }
        inline app::DistortionAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::DistortionAnimator_RendererData__Array>(get_class());
        }
    } // namespace DistortionAnimator_RendererData__Array
} // namespace app::classes::types