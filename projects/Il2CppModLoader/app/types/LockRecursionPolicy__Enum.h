#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockRecursionPolicy__Enum {
        namespace {
            app::LockRecursionPolicy__Enum__Class* type_info_ref = nullptr;
        }
        app::LockRecursionPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::LockRecursionPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::LockRecursionPolicy__Enum__Class>(type_info, "System.Threading", "LockRecursionPolicy");
        }
        inline app::LockRecursionPolicy__Enum* create() {
            return il2cpp::create_object<app::LockRecursionPolicy__Enum>(get_class());
        }
    } // namespace LockRecursionPolicy__Enum
} // namespace app::classes::types
