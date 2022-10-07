#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EHTTPMethod__Enum {
        namespace {
            app::EHTTPMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::EHTTPMethod__Enum__Class** type_info = &type_info_ref;
        inline app::EHTTPMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTTPMethod__Enum__Class>(type_info, "Steamworks", "EHTTPMethod");
        }
        inline app::EHTTPMethod__Enum* create() {
            return il2cpp::create_object<app::EHTTPMethod__Enum>(get_class());
        }
    } // namespace EHTTPMethod__Enum
} // namespace app::classes::types