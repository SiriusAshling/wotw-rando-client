#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleGroundNavigation {
        namespace {
            app::SimpleGroundNavigation__Class* type_info_ref = nullptr;
        }
        app::SimpleGroundNavigation__Class** type_info = &type_info_ref;
        inline app::SimpleGroundNavigation__Class* get_class() {
            return il2cpp::get_class<app::SimpleGroundNavigation__Class>(type_info, "Moon", "SimpleGroundNavigation");
        }
        inline app::SimpleGroundNavigation* create() {
            return il2cpp::create_object<app::SimpleGroundNavigation>(get_class());
        }
    } // namespace SimpleGroundNavigation
} // namespace app::classes::types