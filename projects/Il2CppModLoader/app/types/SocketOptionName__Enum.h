#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketOptionName__Enum {
        namespace {
            app::SocketOptionName__Enum__Class* type_info_ref = nullptr;
        }
        app::SocketOptionName__Enum__Class** type_info = &type_info_ref;
        inline app::SocketOptionName__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOptionName__Enum__Class>(type_info, "System.Net.Sockets", "SocketOptionName");
        }
        inline app::SocketOptionName__Enum* create() {
            return il2cpp::create_object<app::SocketOptionName__Enum>(get_class());
        }
    } // namespace SocketOptionName__Enum
} // namespace app::classes::types
