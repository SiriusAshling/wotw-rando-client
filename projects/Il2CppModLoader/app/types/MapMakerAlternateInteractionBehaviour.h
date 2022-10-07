#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapMakerAlternateInteractionBehaviour {
        namespace {
            app::MapMakerAlternateInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MapMakerAlternateInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerAlternateInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerAlternateInteractionBehaviour__Class>(type_info, "Moon", "MapMakerAlternateInteractionBehaviour");
        }
        inline app::MapMakerAlternateInteractionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerAlternateInteractionBehaviour>(get_class());
        }
    } // namespace MapMakerAlternateInteractionBehaviour
} // namespace app::classes::types