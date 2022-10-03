#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction {
        namespace {
            app::EntityHitReaction__Class* type_info_ref = nullptr;
        }
        app::EntityHitReaction__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction__Class* get_class() {
            return il2cpp::get_class<app::EntityHitReaction__Class>(type_info, "Moon", "EntityHitReaction");
        }
        inline app::EntityHitReaction* create() {
            return il2cpp::create_object<app::EntityHitReaction>(get_class());
        }
    } // namespace EntityHitReaction
} // namespace app::classes::types
