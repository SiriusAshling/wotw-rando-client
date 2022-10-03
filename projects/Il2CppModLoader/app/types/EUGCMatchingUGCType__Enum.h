#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EUGCMatchingUGCType__Enum {
        namespace {
            app::EUGCMatchingUGCType__Enum__Class* type_info_ref = nullptr;
        }
        app::EUGCMatchingUGCType__Enum__Class** type_info = &type_info_ref;
        inline app::EUGCMatchingUGCType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUGCMatchingUGCType__Enum__Class>(type_info, "Steamworks", "EUGCMatchingUGCType");
        }
        inline app::EUGCMatchingUGCType__Enum* create() {
            return il2cpp::create_object<app::EUGCMatchingUGCType__Enum>(get_class());
        }
    } // namespace EUGCMatchingUGCType__Enum
} // namespace app::classes::types
