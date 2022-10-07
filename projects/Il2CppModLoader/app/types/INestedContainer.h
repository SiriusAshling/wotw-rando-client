#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INestedContainer {
        namespace {
            app::INestedContainer__Class* type_info_ref = nullptr;
        }
        app::INestedContainer__Class** type_info = &type_info_ref;
        inline app::INestedContainer__Class* get_class() {
            return il2cpp::get_class<app::INestedContainer__Class>(type_info, "System.ComponentModel", "INestedContainer");
        }
    } // namespace INestedContainer
} // namespace app::classes::types