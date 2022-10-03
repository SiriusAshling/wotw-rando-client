#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class** type_info;
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class>(type_info, "", "ServerBreakablePhysicalSetup", "BreakablePhysicalSetupData");
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData* create() {
            return il2cpp::create_object<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData>(get_class());
        }
        inline app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed* box(app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData value) {
            return il2cpp::box_value<app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Boxed>(get_class(), value);
        }
    } // namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData
} // namespace app::classes::types
