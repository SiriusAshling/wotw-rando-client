#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequest_AuthorizationState {
        namespace {
            app::HttpWebRequest_AuthorizationState__Class* type_info_ref = nullptr;
        }
        app::HttpWebRequest_AuthorizationState__Class** type_info = &type_info_ref;
        inline app::HttpWebRequest_AuthorizationState__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpWebRequest_AuthorizationState__Class>(type_info, "System.Net", "HttpWebRequest", "AuthorizationState");
        }
        inline app::HttpWebRequest_AuthorizationState* create() {
            return il2cpp::create_object<app::HttpWebRequest_AuthorizationState>(get_class());
        }
        inline app::HttpWebRequest_AuthorizationState__Boxed* box(app::HttpWebRequest_AuthorizationState value) {
            return il2cpp::box_value<app::HttpWebRequest_AuthorizationState__Boxed>(get_class(), value);
        }
    } // namespace HttpWebRequest_AuthorizationState
} // namespace app::classes::types
