#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseAnimatorAction_FindAnimatorsMode__Enum {
        namespace {
            app::BaseAnimatorAction_FindAnimatorsMode__Enum__Class* type_info_ref = nullptr;
        }
        app::BaseAnimatorAction_FindAnimatorsMode__Enum__Class** type_info = &type_info_ref;
        inline app::BaseAnimatorAction_FindAnimatorsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseAnimatorAction_FindAnimatorsMode__Enum__Class>(type_info, "", "BaseAnimatorAction", "FindAnimatorsMode");
        }
        inline app::BaseAnimatorAction_FindAnimatorsMode__Enum* create() {
            return il2cpp::create_object<app::BaseAnimatorAction_FindAnimatorsMode__Enum>(get_class());
        }
    } // namespace BaseAnimatorAction_FindAnimatorsMode__Enum
} // namespace app::classes::types
