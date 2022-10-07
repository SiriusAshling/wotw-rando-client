#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneWayAttribute {
        namespace {
            app::OneWayAttribute__Class* type_info_ref = nullptr;
        }
        app::OneWayAttribute__Class** type_info = &type_info_ref;
        inline app::OneWayAttribute__Class* get_class() {
            return il2cpp::get_class<app::OneWayAttribute__Class>(type_info, "System.Runtime.Remoting.Messaging", "OneWayAttribute");
        }
        inline app::OneWayAttribute* create() {
            return il2cpp::create_object<app::OneWayAttribute>(get_class());
        }
    } // namespace OneWayAttribute
} // namespace app::classes::types