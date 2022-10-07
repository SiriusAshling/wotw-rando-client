#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisibleToOtherModulesAttribute {
        namespace {
            app::VisibleToOtherModulesAttribute__Class* type_info_ref = nullptr;
        }
        app::VisibleToOtherModulesAttribute__Class** type_info = &type_info_ref;
        inline app::VisibleToOtherModulesAttribute__Class* get_class() {
            return il2cpp::get_class<app::VisibleToOtherModulesAttribute__Class>(type_info, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
        }
        inline app::VisibleToOtherModulesAttribute* create() {
            return il2cpp::create_object<app::VisibleToOtherModulesAttribute>(get_class());
        }
    } // namespace VisibleToOtherModulesAttribute
} // namespace app::classes::types