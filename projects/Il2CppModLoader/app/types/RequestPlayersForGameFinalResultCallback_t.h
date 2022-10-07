#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestPlayersForGameFinalResultCallback_t {
        namespace {
            app::RequestPlayersForGameFinalResultCallback_t__Class* type_info_ref = nullptr;
        }
        app::RequestPlayersForGameFinalResultCallback_t__Class** type_info = &type_info_ref;
        inline app::RequestPlayersForGameFinalResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::RequestPlayersForGameFinalResultCallback_t__Class>(type_info, "Steamworks", "RequestPlayersForGameFinalResultCallback_t");
        }
        inline app::RequestPlayersForGameFinalResultCallback_t* create() {
            return il2cpp::create_object<app::RequestPlayersForGameFinalResultCallback_t>(get_class());
        }
        inline app::RequestPlayersForGameFinalResultCallback_t__Boxed* box(app::RequestPlayersForGameFinalResultCallback_t value) {
            return il2cpp::box_value<app::RequestPlayersForGameFinalResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace RequestPlayersForGameFinalResultCallback_t
} // namespace app::classes::types