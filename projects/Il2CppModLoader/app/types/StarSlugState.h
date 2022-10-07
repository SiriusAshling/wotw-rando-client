#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugState {
        namespace {
            app::StarSlugState__Class* type_info_ref = nullptr;
        }
        app::StarSlugState__Class** type_info = &type_info_ref;
        inline app::StarSlugState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugState__Class>(type_info, "", "StarSlugState");
        }
        inline app::StarSlugState* create() {
            return il2cpp::create_object<app::StarSlugState>(get_class());
        }
    } // namespace StarSlugState
} // namespace app::classes::types