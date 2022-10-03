#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ZFBInitialSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_ZFBInitialSettings__Class** type_info;
        inline app::BrowserNative_ZFBInitialSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ZFBInitialSettings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ZFBInitialSettings");
        }
        inline app::BrowserNative_ZFBInitialSettings* create() {
            return il2cpp::create_object<app::BrowserNative_ZFBInitialSettings>(get_class());
        }
        inline app::BrowserNative_ZFBInitialSettings__Boxed* box(app::BrowserNative_ZFBInitialSettings value) {
            return il2cpp::box_value<app::BrowserNative_ZFBInitialSettings__Boxed>(get_class(), value);
        }
    } // namespace BrowserNative_ZFBInitialSettings
} // namespace app::classes::types
