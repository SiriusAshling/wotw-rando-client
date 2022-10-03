#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapDebugNavigation {
        namespace {
            app::AreaMapDebugNavigation__Class* type_info_ref = nullptr;
        }
        app::AreaMapDebugNavigation__Class** type_info = &type_info_ref;
        inline app::AreaMapDebugNavigation__Class* get_class() {
            return il2cpp::get_class<app::AreaMapDebugNavigation__Class>(type_info, "", "AreaMapDebugNavigation");
        }
        inline app::AreaMapDebugNavigation* create() {
            return il2cpp::create_object<app::AreaMapDebugNavigation>(get_class());
        }
    } // namespace AreaMapDebugNavigation
} // namespace app::classes::types
