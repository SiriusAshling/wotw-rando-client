#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsInNPCInteractionCondition {
        namespace {
            app::IsInNPCInteractionCondition__Class* type_info_ref = nullptr;
        }
        app::IsInNPCInteractionCondition__Class** type_info = &type_info_ref;
        inline app::IsInNPCInteractionCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInNPCInteractionCondition__Class>(type_info, "", "IsInNPCInteractionCondition");
        }
        inline app::IsInNPCInteractionCondition* create() {
            return il2cpp::create_object<app::IsInNPCInteractionCondition>(get_class());
        }
    } // namespace IsInNPCInteractionCondition
} // namespace app::classes::types
