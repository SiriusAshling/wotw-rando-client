#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MasterTimelineSequence_SceneEntry__Class** type_info;
        inline app::MasterTimelineSequence_SceneEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MasterTimelineSequence_SceneEntry__Class>(type_info, "", "MasterTimelineSequence", "SceneEntry");
        }
        inline app::MasterTimelineSequence_SceneEntry* create() {
            return il2cpp::create_object<app::MasterTimelineSequence_SceneEntry>(get_class());
        }
        inline app::MasterTimelineSequence_SceneEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MasterTimelineSequence_SceneEntry__Array>(get_class(), size);
        }
    } // namespace MasterTimelineSequence_SceneEntry
} // namespace app::classes::types
