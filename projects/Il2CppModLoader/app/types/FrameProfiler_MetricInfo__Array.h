#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_MetricInfo__Array {
        namespace {
            app::FrameProfiler_MetricInfo__Array__Class* type_info_ref = nullptr;
        }
        app::FrameProfiler_MetricInfo__Array__Class** type_info = &type_info_ref;
        inline app::FrameProfiler_MetricInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_MetricInfo__Array__Class>(type_info, "", "FrameProfiler+MetricInfo[]");
        }
        inline app::FrameProfiler_MetricInfo__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_MetricInfo__Array>(get_class());
        }
    } // namespace FrameProfiler_MetricInfo__Array
} // namespace app::classes::types