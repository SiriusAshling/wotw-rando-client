#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ucs4Decoder3412 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ucs4Decoder3412__Class** type_info;
        inline app::Ucs4Decoder3412__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder3412__Class>(type_info, "System.Xml", "Ucs4Decoder3412");
        }
        inline app::Ucs4Decoder3412* create() {
            return il2cpp::create_object<app::Ucs4Decoder3412>(get_class());
        }
    } // namespace Ucs4Decoder3412
} // namespace app::classes::types
