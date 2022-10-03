#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_SlamChargeType__Enum {
        namespace {
            app::RammingBehaviour_SlamChargeType__Enum__Class* type_info_ref = nullptr;
        }
        app::RammingBehaviour_SlamChargeType__Enum__Class** type_info = &type_info_ref;
        inline app::RammingBehaviour_SlamChargeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_SlamChargeType__Enum__Class>(type_info, "Moon", "RammingBehaviour", "SlamChargeType");
        }
        inline app::RammingBehaviour_SlamChargeType__Enum* create() {
            return il2cpp::create_object<app::RammingBehaviour_SlamChargeType__Enum>(get_class());
        }
    } // namespace RammingBehaviour_SlamChargeType__Enum
} // namespace app::classes::types
