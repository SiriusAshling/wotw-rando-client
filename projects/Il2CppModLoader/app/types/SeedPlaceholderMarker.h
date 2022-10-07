#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeedPlaceholderMarker {
        namespace {
            app::SeedPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::SeedPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SeedPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SeedPlaceholderMarker__Class>(type_info, "", "SeedPlaceholderMarker");
        }
        inline app::SeedPlaceholderMarker* create() {
            return il2cpp::create_object<app::SeedPlaceholderMarker>(get_class());
        }
    } // namespace SeedPlaceholderMarker
} // namespace app::classes::types