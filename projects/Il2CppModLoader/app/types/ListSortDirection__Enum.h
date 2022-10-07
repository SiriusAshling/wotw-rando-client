#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListSortDirection__Enum {
        namespace {
            app::ListSortDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::ListSortDirection__Enum__Class** type_info = &type_info_ref;
        inline app::ListSortDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::ListSortDirection__Enum__Class>(type_info, "System.ComponentModel", "ListSortDirection");
        }
        inline app::ListSortDirection__Enum* create() {
            return il2cpp::create_object<app::ListSortDirection__Enum>(get_class());
        }
    } // namespace ListSortDirection__Enum
} // namespace app::classes::types