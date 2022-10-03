#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringPref {
        namespace {
            app::StringPref__Class* type_info_ref = nullptr;
        }
        app::StringPref__Class** type_info = &type_info_ref;
        inline app::StringPref__Class* get_class() {
            return il2cpp::get_class<app::StringPref__Class>(type_info, "Moon.PlayerPrefsUtility", "StringPref");
        }
        inline app::StringPref* create() {
            return il2cpp::create_object<app::StringPref>(get_class());
        }
    } // namespace StringPref
} // namespace app::classes::types
