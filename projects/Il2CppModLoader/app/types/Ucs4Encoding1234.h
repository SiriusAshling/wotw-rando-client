#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding1234 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ucs4Encoding1234__Class** type_info;
        inline app::Ucs4Encoding1234__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding1234__Class>(type_info, "System.Xml", "Ucs4Encoding1234");
        }
        inline app::Ucs4Encoding1234* create() {
            return il2cpp::create_object<app::Ucs4Encoding1234>(get_class());
        }
    } // namespace Ucs4Encoding1234
} // namespace app::classes::types