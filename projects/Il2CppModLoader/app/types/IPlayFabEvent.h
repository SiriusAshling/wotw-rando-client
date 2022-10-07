#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEvent {
        namespace {
            app::IPlayFabEvent__Class* type_info_ref = nullptr;
        }
        app::IPlayFabEvent__Class** type_info = &type_info_ref;
        inline app::IPlayFabEvent__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEvent__Class>(type_info, "PlayFab", "IPlayFabEvent");
        }
    } // namespace IPlayFabEvent
} // namespace app::classes::types