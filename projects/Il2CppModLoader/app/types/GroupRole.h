#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupRole {
        namespace {
            app::GroupRole__Class* type_info_ref = nullptr;
        }
        app::GroupRole__Class** type_info = &type_info_ref;
        inline app::GroupRole__Class* get_class() {
            return il2cpp::get_class<app::GroupRole__Class>(type_info, "PlayFab.GroupsModels", "GroupRole");
        }
        inline app::GroupRole* create() {
            return il2cpp::create_object<app::GroupRole>(get_class());
        }
        inline app::GroupRole__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupRole__Array>(get_class(), size);
        }
    } // namespace GroupRole
} // namespace app::classes::types
