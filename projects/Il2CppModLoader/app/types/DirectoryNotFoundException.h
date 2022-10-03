#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectoryNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DirectoryNotFoundException__Class** type_info;
        inline app::DirectoryNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DirectoryNotFoundException__Class>(type_info, "System.IO", "DirectoryNotFoundException");
        }
        inline app::DirectoryNotFoundException* create() {
            return il2cpp::create_object<app::DirectoryNotFoundException>(get_class());
        }
    } // namespace DirectoryNotFoundException
} // namespace app::classes::types
