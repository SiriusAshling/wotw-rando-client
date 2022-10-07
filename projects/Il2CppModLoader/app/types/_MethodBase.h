#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _MethodBase {
        namespace {
            app::_MethodBase__Class* type_info_ref = nullptr;
        }
        app::_MethodBase__Class** type_info = &type_info_ref;
        inline app::_MethodBase__Class* get_class() {
            return il2cpp::get_class<app::_MethodBase__Class>(type_info, "System.Runtime.InteropServices", "_MethodBase");
        }
    } // namespace _MethodBase
} // namespace app::classes::types