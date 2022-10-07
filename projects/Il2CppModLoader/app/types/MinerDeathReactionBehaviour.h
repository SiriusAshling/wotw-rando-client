#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerDeathReactionBehaviour {
        namespace {
            app::MinerDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerDeathReactionBehaviour__Class>(type_info, "", "MinerDeathReactionBehaviour");
        }
        inline app::MinerDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerDeathReactionBehaviour>(get_class());
        }
    } // namespace MinerDeathReactionBehaviour
} // namespace app::classes::types