#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipeline_IntakeEventAsync_d_24 {
        namespace {
            app::OneDSEventPipeline_IntakeEventAsync_d_24__Class* type_info_ref = nullptr;
        }
        app::OneDSEventPipeline_IntakeEventAsync_d_24__Class** type_info = &type_info_ref;
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventPipeline_IntakeEventAsync_d_24__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipeline", "<IntakeEventAsync>d__24");
        }
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24* create() {
            return il2cpp::create_object<app::OneDSEventPipeline_IntakeEventAsync_d_24>(get_class());
        }
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed* box(app::OneDSEventPipeline_IntakeEventAsync_d_24 value) {
            return il2cpp::box_value<app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventPipeline_IntakeEventAsync_d_24
} // namespace app::classes::types