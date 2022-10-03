#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingHitReactionBehaviour {
        namespace {
            app::SpiderlingHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderlingHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderlingHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingHitReactionBehaviour__Class>(type_info, "", "SpiderlingHitReactionBehaviour");
        }
        inline app::SpiderlingHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderlingHitReactionBehaviour
} // namespace app::classes::types
