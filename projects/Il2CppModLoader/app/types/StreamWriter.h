#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StreamWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StreamWriter__Class** type_info;
        inline app::StreamWriter__Class* get_class() {
            return il2cpp::get_class<app::StreamWriter__Class>(type_info, "System.IO", "StreamWriter");
        }
        inline app::StreamWriter* create() {
            return il2cpp::create_object<app::StreamWriter>(get_class());
        }
    } // namespace StreamWriter
} // namespace app::classes::types
