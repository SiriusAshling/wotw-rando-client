#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewsStatus__Enum {
        namespace {
            app::NewsStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::NewsStatus__Enum__Class** type_info = &type_info_ref;
        inline app::NewsStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::NewsStatus__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "NewsStatus");
        }
        inline app::NewsStatus__Enum* create() {
            return il2cpp::create_object<app::NewsStatus__Enum>(get_class());
        }
    } // namespace NewsStatus__Enum
} // namespace app::classes::types