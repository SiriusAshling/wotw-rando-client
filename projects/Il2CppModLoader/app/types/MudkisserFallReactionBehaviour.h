#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserFallReactionBehaviour {
        namespace {
            app::MudkisserFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MudkisserFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserFallReactionBehaviour__Class>(type_info, "", "MudkisserFallReactionBehaviour");
        }
        inline app::MudkisserFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserFallReactionBehaviour>(get_class());
        }
    } // namespace MudkisserFallReactionBehaviour
} // namespace app::classes::types