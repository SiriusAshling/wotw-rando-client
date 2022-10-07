#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeDebugMenuPage {
        namespace {
            app::TimeDebugMenuPage__Class* type_info_ref = nullptr;
        }
        app::TimeDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::TimeDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TimeDebugMenuPage__Class>(type_info, "", "TimeDebugMenuPage");
        }
        inline app::TimeDebugMenuPage* create() {
            return il2cpp::create_object<app::TimeDebugMenuPage>(get_class());
        }
    } // namespace TimeDebugMenuPage
} // namespace app::classes::types