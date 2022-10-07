#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebUtilityElement {
        namespace {
            app::WebUtilityElement__Class* type_info_ref = nullptr;
        }
        app::WebUtilityElement__Class** type_info = &type_info_ref;
        inline app::WebUtilityElement__Class* get_class() {
            return il2cpp::get_class<app::WebUtilityElement__Class>(type_info, "System.Net.Configuration", "WebUtilityElement");
        }
        inline app::WebUtilityElement* create() {
            return il2cpp::create_object<app::WebUtilityElement>(get_class());
        }
    } // namespace WebUtilityElement
} // namespace app::classes::types