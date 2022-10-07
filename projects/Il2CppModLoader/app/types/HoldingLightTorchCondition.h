#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoldingLightTorchCondition {
        namespace {
            app::HoldingLightTorchCondition__Class* type_info_ref = nullptr;
        }
        app::HoldingLightTorchCondition__Class** type_info = &type_info_ref;
        inline app::HoldingLightTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingLightTorchCondition__Class>(type_info, "", "HoldingLightTorchCondition");
        }
        inline app::HoldingLightTorchCondition* create() {
            return il2cpp::create_object<app::HoldingLightTorchCondition>(get_class());
        }
    } // namespace HoldingLightTorchCondition
} // namespace app::classes::types