#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocationChanger {
        namespace {
            app::LocationChanger__Class* type_info_ref = nullptr;
        }
        app::LocationChanger__Class** type_info = &type_info_ref;
        inline app::LocationChanger__Class* get_class() {
            return il2cpp::get_class<app::LocationChanger__Class>(type_info, "", "LocationChanger");
        }
        inline app::LocationChanger* create() {
            return il2cpp::create_object<app::LocationChanger>(get_class());
        }
    } // namespace LocationChanger
} // namespace app::classes::types
