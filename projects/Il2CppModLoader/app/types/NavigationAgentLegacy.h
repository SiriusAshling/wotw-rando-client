#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigationAgentLegacy {
        namespace {
            app::NavigationAgentLegacy__Class* type_info_ref = nullptr;
        }
        app::NavigationAgentLegacy__Class** type_info = &type_info_ref;
        inline app::NavigationAgentLegacy__Class* get_class() {
            return il2cpp::get_class<app::NavigationAgentLegacy__Class>(type_info, "", "NavigationAgentLegacy");
        }
        inline app::NavigationAgentLegacy* create() {
            return il2cpp::create_object<app::NavigationAgentLegacy>(get_class());
        }
    } // namespace NavigationAgentLegacy
} // namespace app::classes::types