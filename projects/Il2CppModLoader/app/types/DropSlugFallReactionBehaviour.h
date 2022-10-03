#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugFallReactionBehaviour {
        namespace {
            app::DropSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::DropSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallReactionBehaviour__Class>(type_info, "", "DropSlugFallReactionBehaviour");
        }
        inline app::DropSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugFallReactionBehaviour>(get_class());
        }
    } // namespace DropSlugFallReactionBehaviour
} // namespace app::classes::types
