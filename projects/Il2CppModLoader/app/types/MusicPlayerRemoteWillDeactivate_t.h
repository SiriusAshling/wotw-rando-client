#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerRemoteWillDeactivate_t {
        namespace {
            app::MusicPlayerRemoteWillDeactivate_t__Class* type_info_ref = nullptr;
        }
        app::MusicPlayerRemoteWillDeactivate_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerRemoteWillDeactivate_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerRemoteWillDeactivate_t__Class>(type_info, "Steamworks", "MusicPlayerRemoteWillDeactivate_t");
        }
        inline app::MusicPlayerRemoteWillDeactivate_t* create() {
            return il2cpp::create_object<app::MusicPlayerRemoteWillDeactivate_t>(get_class());
        }
        inline app::MusicPlayerRemoteWillDeactivate_t__Boxed* box(app::MusicPlayerRemoteWillDeactivate_t value) {
            return il2cpp::box_value<app::MusicPlayerRemoteWillDeactivate_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerRemoteWillDeactivate_t
} // namespace app::classes::types
