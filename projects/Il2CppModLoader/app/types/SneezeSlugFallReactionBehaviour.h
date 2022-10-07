#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugFallReactionBehaviour {
        namespace {
            app::SneezeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugFallReactionBehaviour__Class>(type_info, "", "SneezeSlugFallReactionBehaviour");
        }
        inline app::SneezeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugFallReactionBehaviour
} // namespace app::classes::types