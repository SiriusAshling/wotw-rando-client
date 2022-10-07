#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetSoundCompositionAction {
        namespace {
            app::SetSoundCompositionAction__Class* type_info_ref = nullptr;
        }
        app::SetSoundCompositionAction__Class** type_info = &type_info_ref;
        inline app::SetSoundCompositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetSoundCompositionAction__Class>(type_info, "", "SetSoundCompositionAction");
        }
        inline app::SetSoundCompositionAction* create() {
            return il2cpp::create_object<app::SetSoundCompositionAction>(get_class());
        }
    } // namespace SetSoundCompositionAction
} // namespace app::classes::types