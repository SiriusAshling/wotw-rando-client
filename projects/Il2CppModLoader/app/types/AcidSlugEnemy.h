#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemy {
        namespace {
            app::AcidSlugEnemy__Class* type_info_ref = nullptr;
        }
        app::AcidSlugEnemy__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemy__Class>(type_info, "", "AcidSlugEnemy");
        }
        inline app::AcidSlugEnemy* create() {
            return il2cpp::create_object<app::AcidSlugEnemy>(get_class());
        }
    } // namespace AcidSlugEnemy
} // namespace app::classes::types
