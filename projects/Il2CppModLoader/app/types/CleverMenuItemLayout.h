#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemLayout {
        namespace {
            app::CleverMenuItemLayout__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemLayout__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemLayout__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemLayout__Class>(type_info, "", "CleverMenuItemLayout");
        }
        inline app::CleverMenuItemLayout* create() {
            return il2cpp::create_object<app::CleverMenuItemLayout>(get_class());
        }
    } // namespace CleverMenuItemLayout
} // namespace app::classes::types
