#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger {
        namespace {
            app::InteractionTrigger__Class* type_info_ref = nullptr;
        }
        app::InteractionTrigger__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger");
        }
        inline app::InteractionTrigger* create() {
            return il2cpp::create_object<app::InteractionTrigger>(get_class());
        }
        inline app::InteractionTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTrigger__Array>(get_class(), size);
        }
        inline app::InteractionTrigger__Array* create_array(const std::vector<app::InteractionTrigger*>& items) {
            return il2cpp::array_new<app::InteractionTrigger__Array>(get_class(), items);
        }
    } // namespace InteractionTrigger
} // namespace app::classes::types