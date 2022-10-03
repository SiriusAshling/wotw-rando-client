#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingChangingEventHandler {
        namespace {
            app::SettingChangingEventHandler__Class* type_info_ref = nullptr;
        }
        app::SettingChangingEventHandler__Class** type_info = &type_info_ref;
        inline app::SettingChangingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SettingChangingEventHandler__Class>(type_info, "System.Configuration", "SettingChangingEventHandler");
        }
        inline app::SettingChangingEventHandler* create() {
            return il2cpp::create_object<app::SettingChangingEventHandler>(get_class());
        }
    } // namespace SettingChangingEventHandler
} // namespace app::classes::types
