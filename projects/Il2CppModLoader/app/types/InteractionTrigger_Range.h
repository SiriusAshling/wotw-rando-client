#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range {
        namespace {
            app::InteractionTrigger_Range__Class* type_info_ref = nullptr;
        }
        app::InteractionTrigger_Range__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger_Range__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_Range__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger", "Range");
        }
        inline app::InteractionTrigger_Range* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range>(get_class());
        }
        inline app::InteractionTrigger_Range__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTrigger_Range__Array>(get_class(), size);
        }
    } // namespace InteractionTrigger_Range
} // namespace app::classes::types
