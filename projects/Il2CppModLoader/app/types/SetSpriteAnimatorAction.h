#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetSpriteAnimatorAction {
        namespace {
            app::SetSpriteAnimatorAction__Class* type_info_ref = nullptr;
        }
        app::SetSpriteAnimatorAction__Class** type_info = &type_info_ref;
        inline app::SetSpriteAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::SetSpriteAnimatorAction__Class>(type_info, "", "SetSpriteAnimatorAction");
        }
        inline app::SetSpriteAnimatorAction* create() {
            return il2cpp::create_object<app::SetSpriteAnimatorAction>(get_class());
        }
    } // namespace SetSpriteAnimatorAction
} // namespace app::classes::types