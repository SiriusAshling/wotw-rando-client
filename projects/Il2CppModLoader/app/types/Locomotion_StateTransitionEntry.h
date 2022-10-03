#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Locomotion_StateTransitionEntry {
        namespace {
            app::Locomotion_StateTransitionEntry__Class* type_info_ref = nullptr;
        }
        app::Locomotion_StateTransitionEntry__Class** type_info = &type_info_ref;
        inline app::Locomotion_StateTransitionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::Locomotion_StateTransitionEntry__Class>(type_info, "Moon", "Locomotion", "StateTransitionEntry");
        }
        inline app::Locomotion_StateTransitionEntry* create() {
            return il2cpp::create_object<app::Locomotion_StateTransitionEntry>(get_class());
        }
        inline app::Locomotion_StateTransitionEntry__Boxed* box(app::Locomotion_StateTransitionEntry value) {
            return il2cpp::box_value<app::Locomotion_StateTransitionEntry__Boxed>(get_class(), value);
        }
        inline app::Locomotion_StateTransitionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::Locomotion_StateTransitionEntry__Array>(get_class(), size);
        }
    } // namespace Locomotion_StateTransitionEntry
} // namespace app::classes::types
