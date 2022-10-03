#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_BaselineMeasurementHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_BaselineMeasurementHandler__Class** type_info;
        inline app::GPUAutoProfiler_BaselineMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_BaselineMeasurementHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "BaselineMeasurementHandler");
        }
        inline app::GPUAutoProfiler_BaselineMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_BaselineMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_BaselineMeasurementHandler
} // namespace app::classes::types
