#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIController_FontPackage__Array {
        namespace {
            app::GUIController_FontPackage__Array__Class* type_info_ref = nullptr;
        }
        app::GUIController_FontPackage__Array__Class** type_info = &type_info_ref;
        inline app::GUIController_FontPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIController_FontPackage__Array__Class>(type_info, "", "GUIController+FontPackage[]");
        }
        inline app::GUIController_FontPackage__Array* create() {
            return il2cpp::create_object<app::GUIController_FontPackage__Array>(get_class());
        }
    } // namespace GUIController_FontPackage__Array
} // namespace app::classes::types