#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupApplication__Array {
        namespace {
            app::GroupApplication__Array__Class* type_info_ref = nullptr;
        }
        app::GroupApplication__Array__Class** type_info = &type_info_ref;
        inline app::GroupApplication__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupApplication__Array__Class>(type_info, "PlayFab.GroupsModels", "GroupApplication[]");
        }
        inline app::GroupApplication__Array* create() {
            return il2cpp::create_object<app::GroupApplication__Array>(get_class());
        }
    } // namespace GroupApplication__Array
} // namespace app::classes::types
