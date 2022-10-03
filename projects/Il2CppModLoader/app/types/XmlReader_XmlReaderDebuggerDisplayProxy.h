#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReader_XmlReaderDebuggerDisplayProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReader_XmlReaderDebuggerDisplayProxy__Class** type_info;
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlReader_XmlReaderDebuggerDisplayProxy__Class>(type_info, "System.Xml", "XmlReader", "XmlReaderDebuggerDisplayProxy");
        }
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy* create() {
            return il2cpp::create_object<app::XmlReader_XmlReaderDebuggerDisplayProxy>(get_class());
        }
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed* box(app::XmlReader_XmlReaderDebuggerDisplayProxy value) {
            return il2cpp::box_value<app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed>(get_class(), value);
        }
    } // namespace XmlReader_XmlReaderDebuggerDisplayProxy
} // namespace app::classes::types
