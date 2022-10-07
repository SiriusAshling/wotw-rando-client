#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserHitReactionBehaviour {
        namespace {
            app::MudkisserHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MudkisserHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserHitReactionBehaviour__Class>(type_info, "", "MudkisserHitReactionBehaviour");
        }
        inline app::MudkisserHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserHitReactionBehaviour>(get_class());
        }
    } // namespace MudkisserHitReactionBehaviour
} // namespace app::classes::types