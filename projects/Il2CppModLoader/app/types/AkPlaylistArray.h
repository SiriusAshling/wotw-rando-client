#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPlaylistArray {
        namespace {
            app::AkPlaylistArray__Class* type_info_ref = nullptr;
        }
        app::AkPlaylistArray__Class** type_info = &type_info_ref;
        inline app::AkPlaylistArray__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylistArray__Class>(type_info, "", "AkPlaylistArray");
        }
        inline app::AkPlaylistArray* create() {
            return il2cpp::create_object<app::AkPlaylistArray>(get_class());
        }
    } // namespace AkPlaylistArray
} // namespace app::classes::types