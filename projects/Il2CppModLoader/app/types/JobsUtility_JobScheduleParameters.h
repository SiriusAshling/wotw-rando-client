#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobsUtility_JobScheduleParameters {
        namespace {
            app::JobsUtility_JobScheduleParameters__Class* type_info_ref = nullptr;
        }
        app::JobsUtility_JobScheduleParameters__Class** type_info = &type_info_ref;
        inline app::JobsUtility_JobScheduleParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::JobsUtility_JobScheduleParameters__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility", "JobScheduleParameters");
        }
        inline app::JobsUtility_JobScheduleParameters* create() {
            return il2cpp::create_object<app::JobsUtility_JobScheduleParameters>(get_class());
        }
        inline app::JobsUtility_JobScheduleParameters__Boxed* box(app::JobsUtility_JobScheduleParameters value) {
            return il2cpp::box_value<app::JobsUtility_JobScheduleParameters__Boxed>(get_class(), value);
        }
    } // namespace JobsUtility_JobScheduleParameters
} // namespace app::classes::types