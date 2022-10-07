#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyWrongTypeException {
        namespace {
            app::SettingsPropertyWrongTypeException__Class* type_info_ref = nullptr;
        }
        app::SettingsPropertyWrongTypeException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyWrongTypeException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyWrongTypeException__Class>(type_info, "System.Configuration", "SettingsPropertyWrongTypeException");
        }
        inline app::SettingsPropertyWrongTypeException* create() {
            return il2cpp::create_object<app::SettingsPropertyWrongTypeException>(get_class());
        }
    } // namespace SettingsPropertyWrongTypeException
} // namespace app::classes::types