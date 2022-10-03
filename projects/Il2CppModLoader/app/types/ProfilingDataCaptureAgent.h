#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingDataCaptureAgent {
        namespace {
            app::ProfilingDataCaptureAgent__Class* type_info_ref = nullptr;
        }
        app::ProfilingDataCaptureAgent__Class** type_info = &type_info_ref;
        inline app::ProfilingDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ProfilingDataCaptureAgent__Class>(type_info, "", "ProfilingDataCaptureAgent");
        }
        inline app::ProfilingDataCaptureAgent* create() {
            return il2cpp::create_object<app::ProfilingDataCaptureAgent>(get_class());
        }
    } // namespace ProfilingDataCaptureAgent
} // namespace app::classes::types
