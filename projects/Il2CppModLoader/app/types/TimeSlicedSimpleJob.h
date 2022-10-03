#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob {
        namespace {
            app::TimeSlicedSimpleJob__Class* type_info_ref = nullptr;
        }
        app::TimeSlicedSimpleJob__Class** type_info = &type_info_ref;
        inline app::TimeSlicedSimpleJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedSimpleJob__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedSimpleJob");
        }
        inline app::TimeSlicedSimpleJob* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob>(get_class());
        }
    } // namespace TimeSlicedSimpleJob
} // namespace app::classes::types
