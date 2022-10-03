#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PowerLineSetup {
        namespace {
            app::PowerLineSetup__Class* type_info_ref = nullptr;
        }
        app::PowerLineSetup__Class** type_info = &type_info_ref;
        inline app::PowerLineSetup__Class* get_class() {
            return il2cpp::get_class<app::PowerLineSetup__Class>(type_info, "", "PowerLineSetup");
        }
        inline app::PowerLineSetup* create() {
            return il2cpp::create_object<app::PowerLineSetup>(get_class());
        }
    } // namespace PowerLineSetup
} // namespace app::classes::types
