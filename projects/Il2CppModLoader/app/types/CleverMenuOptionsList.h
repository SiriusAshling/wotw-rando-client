#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuOptionsList {
        namespace {
            app::CleverMenuOptionsList__Class* type_info_ref = nullptr;
        }
        app::CleverMenuOptionsList__Class** type_info = &type_info_ref;
        inline app::CleverMenuOptionsList__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuOptionsList__Class>(type_info, "", "CleverMenuOptionsList");
        }
        inline app::CleverMenuOptionsList* create() {
            return il2cpp::create_object<app::CleverMenuOptionsList>(get_class());
        }
    } // namespace CleverMenuOptionsList
} // namespace app::classes::types
