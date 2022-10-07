#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Type {
        namespace {
            app::_Type__Class* type_info_ref = nullptr;
        }
        app::_Type__Class** type_info = &type_info_ref;
        inline app::_Type__Class* get_class() {
            return il2cpp::get_class<app::_Type__Class>(type_info, "System.Runtime.InteropServices", "_Type");
        }
    } // namespace _Type
} // namespace app::classes::types