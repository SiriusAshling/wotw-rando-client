#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerElement {
        namespace {
            app::HttpListenerElement__Class* type_info_ref = nullptr;
        }
        app::HttpListenerElement__Class** type_info = &type_info_ref;
        inline app::HttpListenerElement__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerElement__Class>(type_info, "System.Net.Configuration", "HttpListenerElement");
        }
        inline app::HttpListenerElement* create() {
            return il2cpp::create_object<app::HttpListenerElement>(get_class());
        }
    } // namespace HttpListenerElement
} // namespace app::classes::types
