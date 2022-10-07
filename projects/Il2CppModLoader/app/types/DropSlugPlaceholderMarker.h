#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugPlaceholderMarker {
        namespace {
            app::DropSlugPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::DropSlugPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::DropSlugPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::DropSlugPlaceholderMarker__Class>(type_info, "", "DropSlugPlaceholderMarker");
        }
        inline app::DropSlugPlaceholderMarker* create() {
            return il2cpp::create_object<app::DropSlugPlaceholderMarker>(get_class());
        }
    } // namespace DropSlugPlaceholderMarker
} // namespace app::classes::types