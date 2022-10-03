#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDeathReactionBehaviour {
        namespace {
            app::PetrifiedOwlBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDeathReactionBehaviour__Class>(type_info, "", "PetrifiedOwlBossDeathReactionBehaviour");
        }
        inline app::PetrifiedOwlBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDeathReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDeathReactionBehaviour
} // namespace app::classes::types
