#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ChangeFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_ChangeFunc__Class** type_info;
        inline app::BrowserNative_ChangeFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ChangeFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ChangeFunc");
        }
        inline app::BrowserNative_ChangeFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ChangeFunc>(get_class());
        }
    } // namespace BrowserNative_ChangeFunc
} // namespace app::classes::types
