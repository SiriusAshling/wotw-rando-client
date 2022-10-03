#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientSettingsSection {
        namespace {
            app::ClientSettingsSection__Class* type_info_ref = nullptr;
        }
        app::ClientSettingsSection__Class** type_info = &type_info_ref;
        inline app::ClientSettingsSection__Class* get_class() {
            return il2cpp::get_class<app::ClientSettingsSection__Class>(type_info, "System.Configuration", "ClientSettingsSection");
        }
        inline app::ClientSettingsSection* create() {
            return il2cpp::create_object<app::ClientSettingsSection>(get_class());
        }
    } // namespace ClientSettingsSection
} // namespace app::classes::types
