#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _MemberInfo {
        namespace {
            app::_MemberInfo__Class* type_info_ref = nullptr;
        }
        app::_MemberInfo__Class** type_info = &type_info_ref;
        inline app::_MemberInfo__Class* get_class() {
            return il2cpp::get_class<app::_MemberInfo__Class>(type_info, "System.Runtime.InteropServices", "_MemberInfo");
        }
    } // namespace _MemberInfo
} // namespace app::classes::types