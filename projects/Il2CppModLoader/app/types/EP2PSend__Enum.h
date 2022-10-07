#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EP2PSend__Enum {
        namespace {
            app::EP2PSend__Enum__Class* type_info_ref = nullptr;
        }
        app::EP2PSend__Enum__Class** type_info = &type_info_ref;
        inline app::EP2PSend__Enum__Class* get_class() {
            return il2cpp::get_class<app::EP2PSend__Enum__Class>(type_info, "Steamworks", "EP2PSend");
        }
        inline app::EP2PSend__Enum* create() {
            return il2cpp::create_object<app::EP2PSend__Enum>(get_class());
        }
    } // namespace EP2PSend__Enum
} // namespace app::classes::types