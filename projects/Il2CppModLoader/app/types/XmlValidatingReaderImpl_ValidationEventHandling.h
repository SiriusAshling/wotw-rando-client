#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl_ValidationEventHandling {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlValidatingReaderImpl_ValidationEventHandling__Class** type_info;
        inline app::XmlValidatingReaderImpl_ValidationEventHandling__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlValidatingReaderImpl_ValidationEventHandling__Class>(type_info, "System.Xml", "XmlValidatingReaderImpl", "ValidationEventHandling");
        }
        inline app::XmlValidatingReaderImpl_ValidationEventHandling* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl_ValidationEventHandling>(get_class());
        }
    } // namespace XmlValidatingReaderImpl_ValidationEventHandling
} // namespace app::classes::types