#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerAwaitTaskContinuation_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskSchedulerAwaitTaskContinuation_c__Class** type_info;
        inline app::TaskSchedulerAwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskSchedulerAwaitTaskContinuation_c__Class>(type_info, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation", "<>c");
        }
        inline app::TaskSchedulerAwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::TaskSchedulerAwaitTaskContinuation_c>(get_class());
        }
    } // namespace TaskSchedulerAwaitTaskContinuation_c
} // namespace app::classes::types