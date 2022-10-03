#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceBudgetCaptureAgent {
        namespace {
            app::TimesliceBudgetCaptureAgent__Class* type_info_ref = nullptr;
        }
        app::TimesliceBudgetCaptureAgent__Class** type_info = &type_info_ref;
        inline app::TimesliceBudgetCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::TimesliceBudgetCaptureAgent__Class>(type_info, "", "TimesliceBudgetCaptureAgent");
        }
        inline app::TimesliceBudgetCaptureAgent* create() {
            return il2cpp::create_object<app::TimesliceBudgetCaptureAgent>(get_class());
        }
    } // namespace TimesliceBudgetCaptureAgent
} // namespace app::classes::types
