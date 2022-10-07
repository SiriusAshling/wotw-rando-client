#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestDownloadServer_c_DisplayClass5_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestDownloadServer_c_DisplayClass5_0__Class** type_info;
        inline app::TestDownloadServer_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TestDownloadServer_c_DisplayClass5_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "TestDownloadServer", "<>c__DisplayClass5_0");
        }
        inline app::TestDownloadServer_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::TestDownloadServer_c_DisplayClass5_0>(get_class());
        }
    } // namespace TestDownloadServer_c_DisplayClass5_0
} // namespace app::classes::types