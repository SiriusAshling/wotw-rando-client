#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FavoritesListChanged_t {
        namespace {
            app::FavoritesListChanged_t__Class* type_info_ref = nullptr;
        }
        app::FavoritesListChanged_t__Class** type_info = &type_info_ref;
        inline app::FavoritesListChanged_t__Class* get_class() {
            return il2cpp::get_class<app::FavoritesListChanged_t__Class>(type_info, "Steamworks", "FavoritesListChanged_t");
        }
        inline app::FavoritesListChanged_t* create() {
            return il2cpp::create_object<app::FavoritesListChanged_t>(get_class());
        }
        inline app::FavoritesListChanged_t__Boxed* box(app::FavoritesListChanged_t value) {
            return il2cpp::box_value<app::FavoritesListChanged_t__Boxed>(get_class(), value);
        }
    } // namespace FavoritesListChanged_t
} // namespace app::classes::types
