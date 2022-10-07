#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializationEventAttribute {
        namespace {
            app::InitializationEventAttribute__Class* type_info_ref = nullptr;
        }
        app::InitializationEventAttribute__Class** type_info = &type_info_ref;
        inline app::InitializationEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::InitializationEventAttribute__Class>(type_info, "System.ComponentModel", "InitializationEventAttribute");
        }
        inline app::InitializationEventAttribute* create() {
            return il2cpp::create_object<app::InitializationEventAttribute>(get_class());
        }
    } // namespace InitializationEventAttribute
} // namespace app::classes::types