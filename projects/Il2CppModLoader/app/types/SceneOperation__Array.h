#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneOperation__Array {
        namespace {
            app::SceneOperation__Array__Class* type_info_ref = nullptr;
        }
        app::SceneOperation__Array__Class** type_info = &type_info_ref;
        inline app::SceneOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneOperation__Array__Class>(type_info, "", "SceneOperation[]");
        }
        inline app::SceneOperation__Array* create() {
            return il2cpp::create_object<app::SceneOperation__Array>(get_class());
        }
    } // namespace SceneOperation__Array
} // namespace app::classes::types