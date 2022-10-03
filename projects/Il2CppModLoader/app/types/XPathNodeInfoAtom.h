#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNodeInfoAtom {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathNodeInfoAtom__Class** type_info;
        inline app::XPathNodeInfoAtom__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeInfoAtom__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
        }
        inline app::XPathNodeInfoAtom* create() {
            return il2cpp::create_object<app::XPathNodeInfoAtom>(get_class());
        }
    } // namespace XPathNodeInfoAtom
} // namespace app::classes::types
