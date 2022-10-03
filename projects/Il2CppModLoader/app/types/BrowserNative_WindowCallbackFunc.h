#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_WindowCallbackFunc {
        namespace {
            app::BrowserNative_WindowCallbackFunc__Class* type_info_ref = nullptr;
        }
        app::BrowserNative_WindowCallbackFunc__Class** type_info = &type_info_ref;
        inline app::BrowserNative_WindowCallbackFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_WindowCallbackFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "WindowCallbackFunc");
        }
        inline app::BrowserNative_WindowCallbackFunc* create() {
            return il2cpp::create_object<app::BrowserNative_WindowCallbackFunc>(get_class());
        }
    } // namespace BrowserNative_WindowCallbackFunc
} // namespace app::classes::types
