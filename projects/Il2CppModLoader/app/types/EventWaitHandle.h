#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventWaitHandle {
        namespace {
            app::EventWaitHandle__Class* type_info_ref = nullptr;
        }
        app::EventWaitHandle__Class** type_info = &type_info_ref;
        inline app::EventWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::EventWaitHandle__Class>(type_info, "System.Threading", "EventWaitHandle");
        }
        inline app::EventWaitHandle* create() {
            return il2cpp::create_object<app::EventWaitHandle>(get_class());
        }
    } // namespace EventWaitHandle
} // namespace app::classes::types
