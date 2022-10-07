#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshProperties__Enum {
        namespace {
            app::RefreshProperties__Enum__Class* type_info_ref = nullptr;
        }
        app::RefreshProperties__Enum__Class** type_info = &type_info_ref;
        inline app::RefreshProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::RefreshProperties__Enum__Class>(type_info, "System.ComponentModel", "RefreshProperties");
        }
        inline app::RefreshProperties__Enum* create() {
            return il2cpp::create_object<app::RefreshProperties__Enum>(get_class());
        }
    } // namespace RefreshProperties__Enum
} // namespace app::classes::types