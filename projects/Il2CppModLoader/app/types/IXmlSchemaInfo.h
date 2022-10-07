#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlSchemaInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlSchemaInfo__Class** type_info;
        inline app::IXmlSchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::IXmlSchemaInfo__Class>(type_info, "System.Xml.Schema", "IXmlSchemaInfo");
        }
    } // namespace IXmlSchemaInfo
} // namespace app::classes::types