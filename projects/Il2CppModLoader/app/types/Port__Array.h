#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Port__Array {
        namespace {
            app::Port__Array__Class* type_info_ref = nullptr;
        }
        app::Port__Array__Class** type_info = &type_info_ref;
        inline app::Port__Array__Class* get_class() {
            return il2cpp::get_class<app::Port__Array__Class>(type_info, "PlayFab.MultiplayerModels", "Port[]");
        }
        inline app::Port__Array* create() {
            return il2cpp::create_object<app::Port__Array>(get_class());
        }
    } // namespace Port__Array
} // namespace app::classes::types
