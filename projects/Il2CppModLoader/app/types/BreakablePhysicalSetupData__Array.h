#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetupData__Array {
        namespace {
            app::BreakablePhysicalSetupData__Array__Class* type_info_ref = nullptr;
        }
        app::BreakablePhysicalSetupData__Array__Class** type_info = &type_info_ref;
        inline app::BreakablePhysicalSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetupData__Array__Class>(type_info, "", "BreakablePhysicalSetupData[]");
        }
        inline app::BreakablePhysicalSetupData__Array* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetupData__Array>(get_class());
        }
    } // namespace BreakablePhysicalSetupData__Array
} // namespace app::classes::types
