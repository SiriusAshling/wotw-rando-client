#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkAccess__Enum {
        namespace {
            app::NetworkAccess__Enum__Class* type_info_ref = nullptr;
        }
        app::NetworkAccess__Enum__Class** type_info = &type_info_ref;
        inline app::NetworkAccess__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetworkAccess__Enum__Class>(type_info, "System.Net", "NetworkAccess");
        }
        inline app::NetworkAccess__Enum* create() {
            return il2cpp::create_object<app::NetworkAccess__Enum>(get_class());
        }
    } // namespace NetworkAccess__Enum
} // namespace app::classes::types