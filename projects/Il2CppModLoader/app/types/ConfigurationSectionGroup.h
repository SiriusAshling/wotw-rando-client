#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSectionGroup {
        namespace {
            app::ConfigurationSectionGroup__Class* type_info_ref = nullptr;
        }
        app::ConfigurationSectionGroup__Class** type_info = &type_info_ref;
        inline app::ConfigurationSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSectionGroup__Class>(type_info, "System.Configuration", "ConfigurationSectionGroup");
        }
        inline app::ConfigurationSectionGroup* create() {
            return il2cpp::create_object<app::ConfigurationSectionGroup>(get_class());
        }
    } // namespace ConfigurationSectionGroup
} // namespace app::classes::types
