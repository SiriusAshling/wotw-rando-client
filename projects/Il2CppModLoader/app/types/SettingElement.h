#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingElement {
        namespace {
            app::SettingElement__Class* type_info_ref = nullptr;
        }
        app::SettingElement__Class** type_info = &type_info_ref;
        inline app::SettingElement__Class* get_class() {
            return il2cpp::get_class<app::SettingElement__Class>(type_info, "System.Configuration", "SettingElement");
        }
        inline app::SettingElement* create() {
            return il2cpp::create_object<app::SettingElement>(get_class());
        }
    } // namespace SettingElement
} // namespace app::classes::types
