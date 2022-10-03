#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedPreDisableObserver__Array {
        namespace {
            app::ITimeSlicedPreDisableObserver__Array__Class* type_info_ref = nullptr;
        }
        app::ITimeSlicedPreDisableObserver__Array__Class** type_info = &type_info_ref;
        inline app::ITimeSlicedPreDisableObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedPreDisableObserver__Array__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedPreDisableObserver[]");
        }
        inline app::ITimeSlicedPreDisableObserver__Array* create() {
            return il2cpp::create_object<app::ITimeSlicedPreDisableObserver__Array>(get_class());
        }
    } // namespace ITimeSlicedPreDisableObserver__Array
} // namespace app::classes::types
