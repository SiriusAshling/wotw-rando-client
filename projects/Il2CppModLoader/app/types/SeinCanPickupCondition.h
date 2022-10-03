#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCanPickupCondition {
        namespace {
            app::SeinCanPickupCondition__Class* type_info_ref = nullptr;
        }
        app::SeinCanPickupCondition__Class** type_info = &type_info_ref;
        inline app::SeinCanPickupCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinCanPickupCondition__Class>(type_info, "", "SeinCanPickupCondition");
        }
        inline app::SeinCanPickupCondition* create() {
            return il2cpp::create_object<app::SeinCanPickupCondition>(get_class());
        }
    } // namespace SeinCanPickupCondition
} // namespace app::classes::types
