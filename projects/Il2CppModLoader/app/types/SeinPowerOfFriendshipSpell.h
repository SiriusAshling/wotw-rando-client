#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPowerOfFriendshipSpell {
        namespace {
            app::SeinPowerOfFriendshipSpell__Class* type_info_ref = nullptr;
        }
        app::SeinPowerOfFriendshipSpell__Class** type_info = &type_info_ref;
        inline app::SeinPowerOfFriendshipSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerOfFriendshipSpell__Class>(type_info, "", "SeinPowerOfFriendshipSpell");
        }
        inline app::SeinPowerOfFriendshipSpell* create() {
            return il2cpp::create_object<app::SeinPowerOfFriendshipSpell>(get_class());
        }
    } // namespace SeinPowerOfFriendshipSpell
} // namespace app::classes::types
