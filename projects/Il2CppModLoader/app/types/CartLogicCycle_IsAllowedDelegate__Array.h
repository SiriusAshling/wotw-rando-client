#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartLogicCycle_IsAllowedDelegate__Array {
        namespace {
            app::CartLogicCycle_IsAllowedDelegate__Array__Class* type_info_ref = nullptr;
        }
        app::CartLogicCycle_IsAllowedDelegate__Array__Class** type_info = &type_info_ref;
        inline app::CartLogicCycle_IsAllowedDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::CartLogicCycle_IsAllowedDelegate__Array__Class>(type_info, "", "CartLogicCycle+IsAllowedDelegate[]");
        }
        inline app::CartLogicCycle_IsAllowedDelegate__Array* create() {
            return il2cpp::create_object<app::CartLogicCycle_IsAllowedDelegate__Array>(get_class());
        }
    } // namespace CartLogicCycle_IsAllowedDelegate__Array
} // namespace app::classes::types