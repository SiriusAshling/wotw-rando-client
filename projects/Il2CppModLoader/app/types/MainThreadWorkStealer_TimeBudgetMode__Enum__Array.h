#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer_TimeBudgetMode__Enum__Array {
        namespace {
            app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array__Class>(type_info, "usedStandaloneScripts", "MainThreadWorkStealer+TimeBudgetMode[]");
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array* create() {
            return il2cpp::create_object<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array>(get_class());
        }
    } // namespace MainThreadWorkStealer_TimeBudgetMode__Enum__Array
} // namespace app::classes::types
