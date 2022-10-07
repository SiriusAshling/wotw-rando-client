#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapNavigation {
        namespace {
            app::AreaMapNavigation__Class* type_info_ref = nullptr;
        }
        app::AreaMapNavigation__Class** type_info = &type_info_ref;
        inline app::AreaMapNavigation__Class* get_class() {
            return il2cpp::get_class<app::AreaMapNavigation__Class>(type_info, "", "AreaMapNavigation");
        }
        inline app::AreaMapNavigation* create() {
            return il2cpp::create_object<app::AreaMapNavigation>(get_class());
        }
    } // namespace AreaMapNavigation
} // namespace app::classes::types