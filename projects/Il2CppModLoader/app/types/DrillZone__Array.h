#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrillZone__Array {
        namespace {
            app::DrillZone__Array__Class* type_info_ref = nullptr;
        }
        app::DrillZone__Array__Class** type_info = &type_info_ref;
        inline app::DrillZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DrillZone__Array__Class>(type_info, "", "DrillZone[]");
        }
        inline app::DrillZone__Array* create() {
            return il2cpp::create_object<app::DrillZone__Array>(get_class());
        }
    } // namespace DrillZone__Array
} // namespace app::classes::types
