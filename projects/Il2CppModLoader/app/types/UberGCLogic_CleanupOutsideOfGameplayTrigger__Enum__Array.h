#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array {
        namespace {
            app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic+CleanupOutsideOfGameplayTrigger[]");
        }
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array* create() {
            return il2cpp::create_object<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array>(get_class());
        }
    } // namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array
} // namespace app::classes::types
