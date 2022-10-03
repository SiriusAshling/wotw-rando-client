#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkInterfaceComponent__Enum {
        namespace {
            app::NetworkInterfaceComponent__Enum__Class* type_info_ref = nullptr;
        }
        app::NetworkInterfaceComponent__Enum__Class** type_info = &type_info_ref;
        inline app::NetworkInterfaceComponent__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetworkInterfaceComponent__Enum__Class>(type_info, "System.Net.NetworkInformation", "NetworkInterfaceComponent");
        }
        inline app::NetworkInterfaceComponent__Enum* create() {
            return il2cpp::create_object<app::NetworkInterfaceComponent__Enum>(get_class());
        }
    } // namespace NetworkInterfaceComponent__Enum
} // namespace app::classes::types
