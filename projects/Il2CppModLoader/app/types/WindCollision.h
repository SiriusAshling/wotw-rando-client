#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindCollision {
        namespace {
            app::WindCollision__Class* type_info_ref = nullptr;
        }
        app::WindCollision__Class** type_info = &type_info_ref;
        inline app::WindCollision__Class* get_class() {
            return il2cpp::get_class<app::WindCollision__Class>(type_info, "", "WindCollision");
        }
        inline app::WindCollision* create() {
            return il2cpp::create_object<app::WindCollision>(get_class());
        }
    } // namespace WindCollision
} // namespace app::classes::types