#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour {
        namespace {
            app::CrabHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::CrabHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabHitReactionBehaviour__Class>(type_info, "", "CrabHitReactionBehaviour");
        }
        inline app::CrabHitReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour>(get_class());
        }
    } // namespace CrabHitReactionBehaviour
} // namespace app::classes::types
