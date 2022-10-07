#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _PropertyInfo {
        namespace {
            app::_PropertyInfo__Class* type_info_ref = nullptr;
        }
        app::_PropertyInfo__Class** type_info = &type_info_ref;
        inline app::_PropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::_PropertyInfo__Class>(type_info, "System.Runtime.InteropServices", "_PropertyInfo");
        }
    } // namespace _PropertyInfo
} // namespace app::classes::types