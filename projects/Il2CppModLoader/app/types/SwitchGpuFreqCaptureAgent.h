#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchGpuFreqCaptureAgent {
        namespace {
            app::SwitchGpuFreqCaptureAgent__Class* type_info_ref = nullptr;
        }
        app::SwitchGpuFreqCaptureAgent__Class** type_info = &type_info_ref;
        inline app::SwitchGpuFreqCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SwitchGpuFreqCaptureAgent__Class>(type_info, "", "SwitchGpuFreqCaptureAgent");
        }
        inline app::SwitchGpuFreqCaptureAgent* create() {
            return il2cpp::create_object<app::SwitchGpuFreqCaptureAgent>(get_class());
        }
    } // namespace SwitchGpuFreqCaptureAgent
} // namespace app::classes::types