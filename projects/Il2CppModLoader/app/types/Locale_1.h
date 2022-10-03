#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Locale_1 {
        namespace {
            app::Locale_1__Class* type_info_ref = nullptr;
        }
        app::Locale_1__Class** type_info = &type_info_ref;
        inline app::Locale_1__Class* get_class() {
            return il2cpp::get_class<app::Locale_1__Class>(type_info, "", "Locale");
        }
        inline app::Locale_1* create() {
            return il2cpp::create_object<app::Locale_1>(get_class());
        }
    } // namespace Locale_1
} // namespace app::classes::types
