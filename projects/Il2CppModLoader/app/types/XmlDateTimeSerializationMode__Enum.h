#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDateTimeSerializationMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDateTimeSerializationMode__Enum__Class** type_info;
        inline app::XmlDateTimeSerializationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeSerializationMode__Enum__Class>(type_info, "System.Xml", "XmlDateTimeSerializationMode");
        }
        inline app::XmlDateTimeSerializationMode__Enum* create() {
            return il2cpp::create_object<app::XmlDateTimeSerializationMode__Enum>(get_class());
        }
    } // namespace XmlDateTimeSerializationMode__Enum
} // namespace app::classes::types
