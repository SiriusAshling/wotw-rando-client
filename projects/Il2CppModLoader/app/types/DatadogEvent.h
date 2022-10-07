#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatadogEvent {
        namespace {
            app::DatadogEvent__Class* type_info_ref = nullptr;
        }
        app::DatadogEvent__Class** type_info = &type_info_ref;
        inline app::DatadogEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogEvent__Class>(type_info, "", "DatadogEvent");
        }
        inline app::DatadogEvent* create() {
            return il2cpp::create_object<app::DatadogEvent>(get_class());
        }
    } // namespace DatadogEvent
} // namespace app::classes::types