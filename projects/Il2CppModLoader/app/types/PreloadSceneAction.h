#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreloadSceneAction {
        namespace {
            app::PreloadSceneAction__Class* type_info_ref = nullptr;
        }
        app::PreloadSceneAction__Class** type_info = &type_info_ref;
        inline app::PreloadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadSceneAction__Class>(type_info, "", "PreloadSceneAction");
        }
        inline app::PreloadSceneAction* create() {
            return il2cpp::create_object<app::PreloadSceneAction>(get_class());
        }
    } // namespace PreloadSceneAction
} // namespace app::classes::types