#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage {
        namespace {
            app::GeneralDebugMenuPage__Class* type_info_ref = nullptr;
        }
        app::GeneralDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::GeneralDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::GeneralDebugMenuPage__Class>(type_info, "", "GeneralDebugMenuPage");
        }
        inline app::GeneralDebugMenuPage* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage>(get_class());
        }
    } // namespace GeneralDebugMenuPage
} // namespace app::classes::types