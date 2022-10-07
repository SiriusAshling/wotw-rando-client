#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StreamReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StreamReader__Class** type_info;
        inline app::StreamReader__Class* get_class() {
            return il2cpp::get_class<app::StreamReader__Class>(type_info, "System.IO", "StreamReader");
        }
        inline app::StreamReader* create() {
            return il2cpp::create_object<app::StreamReader>(get_class());
        }
    } // namespace StreamReader
} // namespace app::classes::types