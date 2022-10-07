#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectFilter {
        namespace {
            app::GameObjectFilter__Class* type_info_ref = nullptr;
        }
        app::GameObjectFilter__Class** type_info = &type_info_ref;
        inline app::GameObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::GameObjectFilter__Class>(type_info, "", "GameObjectFilter");
        }
        inline app::GameObjectFilter* create() {
            return il2cpp::create_object<app::GameObjectFilter>(get_class());
        }
    } // namespace GameObjectFilter
} // namespace app::classes::types