#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneSettings__Array {
        namespace {
            app::MasterTimelineSequence_SceneSettings__Array__Class* type_info_ref = nullptr;
        }
        app::MasterTimelineSequence_SceneSettings__Array__Class** type_info = &type_info_ref;
        inline app::MasterTimelineSequence_SceneSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineSequence_SceneSettings__Array__Class>(type_info, "", "MasterTimelineSequence+SceneSettings[]");
        }
        inline app::MasterTimelineSequence_SceneSettings__Array* create() {
            return il2cpp::create_object<app::MasterTimelineSequence_SceneSettings__Array>(get_class());
        }
    } // namespace MasterTimelineSequence_SceneSettings__Array
} // namespace app::classes::types