#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleConnection {
        namespace {
            app::ConsoleConnection__Class* type_info_ref = nullptr;
        }
        app::ConsoleConnection__Class** type_info = &type_info_ref;
        inline app::ConsoleConnection__Class* get_class() {
            return il2cpp::get_class<app::ConsoleConnection__Class>(type_info, "", "ConsoleConnection");
        }
        inline app::ConsoleConnection* create() {
            return il2cpp::create_object<app::ConsoleConnection>(get_class());
        }
    } // namespace ConsoleConnection
} // namespace app::classes::types
