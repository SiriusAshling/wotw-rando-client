#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityReactions_ReactionInterruptionSuspensionEntry__Array {
        namespace {
            app::EntityReactions_ReactionInterruptionSuspensionEntry__Array__Class* type_info_ref = nullptr;
        }
        app::EntityReactions_ReactionInterruptionSuspensionEntry__Array__Class** type_info = &type_info_ref;
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityReactions_ReactionInterruptionSuspensionEntry__Array__Class>(type_info, "", "EntityReactions+ReactionInterruptionSuspensionEntry[]");
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* create() {
            return il2cpp::create_object<app::EntityReactions_ReactionInterruptionSuspensionEntry__Array>(get_class());
        }
    } // namespace EntityReactions_ReactionInterruptionSuspensionEntry__Array
} // namespace app::classes::types
