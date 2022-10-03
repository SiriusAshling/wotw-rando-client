#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadProgressChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadProgressChangedEventArgs__Class** type_info;
        inline app::DownloadProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadProgressChangedEventArgs__Class>(type_info, "System.Net", "DownloadProgressChangedEventArgs");
        }
        inline app::DownloadProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::DownloadProgressChangedEventArgs>(get_class());
        }
    } // namespace DownloadProgressChangedEventArgs
} // namespace app::classes::types
