#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour {
        namespace {
            app::HornBugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornBugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugHitReactionBehaviour__Class>(type_info, "", "HornBugHitReactionBehaviour");
        }
        inline app::HornBugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour
} // namespace app::classes::types