#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneMetaData__Array__Class** type_info;
        inline app::SceneMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData__Array__Class>(type_info, "", "SceneMetaData[]");
        }
        inline app::SceneMetaData__Array* create() {
            return il2cpp::create_object<app::SceneMetaData__Array>(get_class());
        }
    } // namespace SceneMetaData__Array
} // namespace app::classes::types
