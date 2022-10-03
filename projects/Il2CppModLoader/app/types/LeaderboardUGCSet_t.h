#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardUGCSet_t {
        namespace {
            app::LeaderboardUGCSet_t__Class* type_info_ref = nullptr;
        }
        app::LeaderboardUGCSet_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardUGCSet_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardUGCSet_t__Class>(type_info, "Steamworks", "LeaderboardUGCSet_t");
        }
        inline app::LeaderboardUGCSet_t* create() {
            return il2cpp::create_object<app::LeaderboardUGCSet_t>(get_class());
        }
        inline app::LeaderboardUGCSet_t__Boxed* box(app::LeaderboardUGCSet_t value) {
            return il2cpp::box_value<app::LeaderboardUGCSet_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardUGCSet_t
} // namespace app::classes::types
