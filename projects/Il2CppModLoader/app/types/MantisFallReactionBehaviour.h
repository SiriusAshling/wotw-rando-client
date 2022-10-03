#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisFallReactionBehaviour {
        namespace {
            app::MantisFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MantisFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisFallReactionBehaviour__Class>(type_info, "", "MantisFallReactionBehaviour");
        }
        inline app::MantisFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisFallReactionBehaviour>(get_class());
        }
    } // namespace MantisFallReactionBehaviour
} // namespace app::classes::types
