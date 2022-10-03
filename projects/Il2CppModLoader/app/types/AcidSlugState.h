#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugState {
        namespace {
            app::AcidSlugState__Class* type_info_ref = nullptr;
        }
        app::AcidSlugState__Class** type_info = &type_info_ref;
        inline app::AcidSlugState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugState__Class>(type_info, "", "AcidSlugState");
        }
        inline app::AcidSlugState* create() {
            return il2cpp::create_object<app::AcidSlugState>(get_class());
        }
    } // namespace AcidSlugState
} // namespace app::classes::types
