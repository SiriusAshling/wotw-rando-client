#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FollowMode__Enum {
        namespace {
            app::FollowMode__Enum__Class* type_info_ref = nullptr;
        }
        app::FollowMode__Enum__Class** type_info = &type_info_ref;
        inline app::FollowMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowMode__Enum__Class>(type_info, "Moon", "FollowMode");
        }
        inline app::FollowMode__Enum* create() {
            return il2cpp::create_object<app::FollowMode__Enum>(get_class());
        }
    } // namespace FollowMode__Enum
} // namespace app::classes::types