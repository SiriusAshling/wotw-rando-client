#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_Entry__Array {
        namespace {
            app::SeinEventsDebugger_Entry__Array__Class* type_info_ref = nullptr;
        }
        app::SeinEventsDebugger_Entry__Array__Class** type_info = &type_info_ref;
        inline app::SeinEventsDebugger_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinEventsDebugger_Entry__Array__Class>(type_info, "", "SeinEventsDebugger+Entry[]");
        }
        inline app::SeinEventsDebugger_Entry__Array* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_Entry__Array>(get_class());
        }
    } // namespace SeinEventsDebugger_Entry__Array
} // namespace app::classes::types