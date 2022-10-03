#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_SequencesConfiguration {
        namespace {
            app::RaceStateMachineContext_SequencesConfiguration__Class* type_info_ref = nullptr;
        }
        app::RaceStateMachineContext_SequencesConfiguration__Class** type_info = &type_info_ref;
        inline app::RaceStateMachineContext_SequencesConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_SequencesConfiguration__Class>(type_info, "", "RaceStateMachineContext", "SequencesConfiguration");
        }
        inline app::RaceStateMachineContext_SequencesConfiguration* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_SequencesConfiguration>(get_class());
        }
    } // namespace RaceStateMachineContext_SequencesConfiguration
} // namespace app::classes::types
