#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EUniverse__Enum {
        namespace {
            app::EUniverse__Enum__Class* type_info_ref = nullptr;
        }
        app::EUniverse__Enum__Class** type_info = &type_info_ref;
        inline app::EUniverse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUniverse__Enum__Class>(type_info, "Steamworks", "EUniverse");
        }
        inline app::EUniverse__Enum* create() {
            return il2cpp::create_object<app::EUniverse__Enum>(get_class());
        }
    } // namespace EUniverse__Enum
} // namespace app::classes::types
