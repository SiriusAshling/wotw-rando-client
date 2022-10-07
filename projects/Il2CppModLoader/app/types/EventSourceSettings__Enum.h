#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSourceSettings__Enum {
        namespace {
            app::EventSourceSettings__Enum__Class* type_info_ref = nullptr;
        }
        app::EventSourceSettings__Enum__Class** type_info = &type_info_ref;
        inline app::EventSourceSettings__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventSourceSettings__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceSettings");
        }
        inline app::EventSourceSettings__Enum* create() {
            return il2cpp::create_object<app::EventSourceSettings__Enum>(get_class());
        }
    } // namespace EventSourceSettings__Enum
} // namespace app::classes::types