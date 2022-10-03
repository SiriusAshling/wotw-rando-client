#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackIdentities {
        namespace {
            app::CallbackIdentities__Class* type_info_ref = nullptr;
        }
        app::CallbackIdentities__Class** type_info = &type_info_ref;
        inline app::CallbackIdentities__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentities__Class>(type_info, "Steamworks", "CallbackIdentities");
        }
        inline app::CallbackIdentities* create() {
            return il2cpp::create_object<app::CallbackIdentities>(get_class());
        }
    } // namespace CallbackIdentities
} // namespace app::classes::types
