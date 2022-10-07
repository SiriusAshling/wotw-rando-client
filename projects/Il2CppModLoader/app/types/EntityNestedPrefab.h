#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityNestedPrefab {
        namespace {
            app::EntityNestedPrefab__Class* type_info_ref = nullptr;
        }
        app::EntityNestedPrefab__Class** type_info = &type_info_ref;
        inline app::EntityNestedPrefab__Class* get_class() {
            return il2cpp::get_class<app::EntityNestedPrefab__Class>(type_info, "", "EntityNestedPrefab");
        }
        inline app::EntityNestedPrefab* create() {
            return il2cpp::create_object<app::EntityNestedPrefab>(get_class());
        }
    } // namespace EntityNestedPrefab
} // namespace app::classes::types