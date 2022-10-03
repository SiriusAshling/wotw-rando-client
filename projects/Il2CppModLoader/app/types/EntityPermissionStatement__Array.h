#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPermissionStatement__Array {
        namespace {
            app::EntityPermissionStatement__Array__Class* type_info_ref = nullptr;
        }
        app::EntityPermissionStatement__Array__Class** type_info = &type_info_ref;
        inline app::EntityPermissionStatement__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPermissionStatement__Array__Class>(type_info, "PlayFab.ProfilesModels", "EntityPermissionStatement[]");
        }
        inline app::EntityPermissionStatement__Array* create() {
            return il2cpp::create_object<app::EntityPermissionStatement__Array>(get_class());
        }
    } // namespace EntityPermissionStatement__Array
} // namespace app::classes::types
