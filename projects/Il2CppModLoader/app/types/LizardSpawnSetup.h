#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardSpawnSetup {
        namespace {
            app::LizardSpawnSetup__Class* type_info_ref = nullptr;
        }
        app::LizardSpawnSetup__Class** type_info = &type_info_ref;
        inline app::LizardSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnSetup__Class>(type_info, "", "LizardSpawnSetup");
        }
        inline app::LizardSpawnSetup* create() {
            return il2cpp::create_object<app::LizardSpawnSetup>(get_class());
        }
    } // namespace LizardSpawnSetup
} // namespace app::classes::types