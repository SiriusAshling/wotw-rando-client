#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DnsPermissionAttribute {
        namespace {
            app::DnsPermissionAttribute__Class* type_info_ref = nullptr;
        }
        app::DnsPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::DnsPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DnsPermissionAttribute__Class>(type_info, "System.Net", "DnsPermissionAttribute");
        }
        inline app::DnsPermissionAttribute* create() {
            return il2cpp::create_object<app::DnsPermissionAttribute>(get_class());
        }
    } // namespace DnsPermissionAttribute
} // namespace app::classes::types