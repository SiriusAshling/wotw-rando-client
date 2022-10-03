#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientSessionStartPayload {
        namespace {
            app::ClientSessionStartPayload__Class* type_info_ref = nullptr;
        }
        app::ClientSessionStartPayload__Class** type_info = &type_info_ref;
        inline app::ClientSessionStartPayload__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionStartPayload__Class>(type_info, "PlayFab.PlayStreamModels", "ClientSessionStartPayload");
        }
        inline app::ClientSessionStartPayload* create() {
            return il2cpp::create_object<app::ClientSessionStartPayload>(get_class());
        }
    } // namespace ClientSessionStartPayload
} // namespace app::classes::types
