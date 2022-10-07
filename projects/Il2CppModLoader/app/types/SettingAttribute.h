#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingAttribute {
        namespace {
            app::SettingAttribute__Class* type_info_ref = nullptr;
        }
        app::SettingAttribute__Class** type_info = &type_info_ref;
        inline app::SettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingAttribute__Class>(type_info, "System.Configuration", "SettingAttribute");
        }
        inline app::SettingAttribute* create() {
            return il2cpp::create_object<app::SettingAttribute>(get_class());
        }
    } // namespace SettingAttribute
} // namespace app::classes::types