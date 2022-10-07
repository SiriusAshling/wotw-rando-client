#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnicodeCategory__Enum {
        namespace {
            app::UnicodeCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::UnicodeCategory__Enum__Class** type_info = &type_info_ref;
        inline app::UnicodeCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeCategory__Enum__Class>(type_info, "System.Globalization", "UnicodeCategory");
        }
        inline app::UnicodeCategory__Enum* create() {
            return il2cpp::create_object<app::UnicodeCategory__Enum>(get_class());
        }
    } // namespace UnicodeCategory__Enum
} // namespace app::classes::types