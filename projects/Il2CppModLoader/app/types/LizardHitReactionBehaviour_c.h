#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardHitReactionBehaviour_c__Class** type_info;
        inline app::LizardHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardHitReactionBehaviour_c__Class>(type_info, "", "LizardHitReactionBehaviour", "<>c");
        }
        inline app::LizardHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour_c>(get_class());
        }
    } // namespace LizardHitReactionBehaviour_c
} // namespace app::classes::types