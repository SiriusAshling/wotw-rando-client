#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinAbilities {
        namespace {
            app::SceneMetaData_SeinAbilities__Class* type_info_ref = nullptr;
        }
        app::SceneMetaData_SeinAbilities__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_SeinAbilities__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinAbilities__Class>(type_info, "", "SceneMetaData", "SeinAbilities");
        }
        inline app::SceneMetaData_SeinAbilities* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinAbilities>(get_class());
        }
    } // namespace SceneMetaData_SeinAbilities
} // namespace app::classes::types
