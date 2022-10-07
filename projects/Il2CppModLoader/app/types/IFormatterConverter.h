#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFormatterConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFormatterConverter__Class** type_info;
        inline app::IFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::IFormatterConverter__Class>(type_info, "System.Runtime.Serialization", "IFormatterConverter");
        }
    } // namespace IFormatterConverter
} // namespace app::classes::types