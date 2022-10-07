#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebParseError {
        namespace {
            app::WebParseError__Class* type_info_ref = nullptr;
        }
        app::WebParseError__Class** type_info = &type_info_ref;
        inline app::WebParseError__Class* get_class() {
            return il2cpp::get_class<app::WebParseError__Class>(type_info, "System.Net", "WebParseError");
        }
        inline app::WebParseError* create() {
            return il2cpp::create_object<app::WebParseError>(get_class());
        }
        inline app::WebParseError__Boxed* box(app::WebParseError value) {
            return il2cpp::box_value<app::WebParseError__Boxed>(get_class(), value);
        }
    } // namespace WebParseError
} // namespace app::classes::types