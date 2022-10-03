#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LauncherPlantEntity {
        namespace {
            app::LauncherPlantEntity__Class* type_info_ref = nullptr;
        }
        app::LauncherPlantEntity__Class** type_info = &type_info_ref;
        inline app::LauncherPlantEntity__Class* get_class() {
            return il2cpp::get_class<app::LauncherPlantEntity__Class>(type_info, "", "LauncherPlantEntity");
        }
        inline app::LauncherPlantEntity* create() {
            return il2cpp::create_object<app::LauncherPlantEntity>(get_class());
        }
    } // namespace LauncherPlantEntity
} // namespace app::classes::types
