#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ucs4Decoder4321 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ucs4Decoder4321__Class** type_info;
        inline app::Ucs4Decoder4321__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder4321__Class>(type_info, "System.Xml", "Ucs4Decoder4321");
        }
        inline app::Ucs4Decoder4321* create() {
            return il2cpp::create_object<app::Ucs4Decoder4321>(get_class());
        }
    } // namespace Ucs4Decoder4321
} // namespace app::classes::types
