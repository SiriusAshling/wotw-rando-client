#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordingTransformTracker {
        namespace {
            app::RecordingTransformTracker__Class* type_info_ref = nullptr;
        }
        app::RecordingTransformTracker__Class** type_info = &type_info_ref;
        inline app::RecordingTransformTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingTransformTracker__Class>(type_info, "", "RecordingTransformTracker");
        }
        inline app::RecordingTransformTracker* create() {
            return il2cpp::create_object<app::RecordingTransformTracker>(get_class());
        }
    } // namespace RecordingTransformTracker
} // namespace app::classes::types