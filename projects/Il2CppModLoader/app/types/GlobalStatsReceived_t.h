#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalStatsReceived_t {
        namespace {
            app::GlobalStatsReceived_t__Class* type_info_ref = nullptr;
        }
        app::GlobalStatsReceived_t__Class** type_info = &type_info_ref;
        inline app::GlobalStatsReceived_t__Class* get_class() {
            return il2cpp::get_class<app::GlobalStatsReceived_t__Class>(type_info, "Steamworks", "GlobalStatsReceived_t");
        }
        inline app::GlobalStatsReceived_t* create() {
            return il2cpp::create_object<app::GlobalStatsReceived_t>(get_class());
        }
        inline app::GlobalStatsReceived_t__Boxed* box(app::GlobalStatsReceived_t value) {
            return il2cpp::box_value<app::GlobalStatsReceived_t__Boxed>(get_class(), value);
        }
    } // namespace GlobalStatsReceived_t
} // namespace app::classes::types
