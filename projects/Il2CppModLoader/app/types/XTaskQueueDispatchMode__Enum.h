#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XTaskQueueDispatchMode__Enum {
        namespace {
            app::XTaskQueueDispatchMode__Enum__Class* type_info_ref = nullptr;
        }
        app::XTaskQueueDispatchMode__Enum__Class** type_info = &type_info_ref;
        inline app::XTaskQueueDispatchMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueDispatchMode__Enum__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueueDispatchMode");
        }
        inline app::XTaskQueueDispatchMode__Enum* create() {
            return il2cpp::create_object<app::XTaskQueueDispatchMode__Enum>(get_class());
        }
    } // namespace XTaskQueueDispatchMode__Enum
} // namespace app::classes::types
