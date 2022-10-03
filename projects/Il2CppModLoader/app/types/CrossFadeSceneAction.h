#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossFadeSceneAction {
        namespace {
            app::CrossFadeSceneAction__Class* type_info_ref = nullptr;
        }
        app::CrossFadeSceneAction__Class** type_info = &type_info_ref;
        inline app::CrossFadeSceneAction__Class* get_class() {
            return il2cpp::get_class<app::CrossFadeSceneAction__Class>(type_info, "", "CrossFadeSceneAction");
        }
        inline app::CrossFadeSceneAction* create() {
            return il2cpp::create_object<app::CrossFadeSceneAction>(get_class());
        }
    } // namespace CrossFadeSceneAction
} // namespace app::classes::types
