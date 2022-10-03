#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenarioRoot {
        namespace {
            app::ScenarioRoot__Class* type_info_ref = nullptr;
        }
        app::ScenarioRoot__Class** type_info = &type_info_ref;
        inline app::ScenarioRoot__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRoot__Class>(type_info, "", "ScenarioRoot");
        }
        inline app::ScenarioRoot* create() {
            return il2cpp::create_object<app::ScenarioRoot>(get_class());
        }
    } // namespace ScenarioRoot
} // namespace app::classes::types
