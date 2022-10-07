#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Timer {
        namespace {
            app::TimerThread_Timer__Class* type_info_ref = nullptr;
        }
        app::TimerThread_Timer__Class** type_info = &type_info_ref;
        inline app::TimerThread_Timer__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Timer__Class>(type_info, "System.Net", "TimerThread", "Timer");
        }
        inline app::TimerThread_Timer* create() {
            return il2cpp::create_object<app::TimerThread_Timer>(get_class());
        }
    } // namespace TimerThread_Timer
} // namespace app::classes::types