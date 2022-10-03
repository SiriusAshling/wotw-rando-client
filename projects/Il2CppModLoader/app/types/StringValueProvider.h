#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringValueProvider {
        namespace {
            app::StringValueProvider__Class* type_info_ref = nullptr;
        }
        app::StringValueProvider__Class** type_info = &type_info_ref;
        inline app::StringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::StringValueProvider__Class>(type_info, "", "StringValueProvider");
        }
        inline app::StringValueProvider* create() {
            return il2cpp::create_object<app::StringValueProvider>(get_class());
        }
    } // namespace StringValueProvider
} // namespace app::classes::types
