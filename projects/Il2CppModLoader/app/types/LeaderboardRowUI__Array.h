#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardRowUI__Array {
        namespace {
            app::LeaderboardRowUI__Array__Class* type_info_ref = nullptr;
        }
        app::LeaderboardRowUI__Array__Class** type_info = &type_info_ref;
        inline app::LeaderboardRowUI__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardRowUI__Array__Class>(type_info, "", "LeaderboardRowUI[]");
        }
        inline app::LeaderboardRowUI__Array* create() {
            return il2cpp::create_object<app::LeaderboardRowUI__Array>(get_class());
        }
    } // namespace LeaderboardRowUI__Array
} // namespace app::classes::types
