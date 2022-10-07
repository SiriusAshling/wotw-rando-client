#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererPostDesertQuestCompletedInteractionBehaviour {
        namespace {
            app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::WandererPostDesertQuestCompletedInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostDesertQuestCompletedInteractionBehaviour__Class>(type_info, "", "WandererPostDesertQuestCompletedInteractionBehaviour");
        }
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostDesertQuestCompletedInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostDesertQuestCompletedInteractionBehaviour
} // namespace app::classes::types