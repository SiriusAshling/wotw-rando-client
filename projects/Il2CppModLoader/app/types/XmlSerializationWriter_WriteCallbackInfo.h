#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriter_WriteCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationWriter_WriteCallbackInfo__Class** type_info;
        inline app::XmlSerializationWriter_WriteCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationWriter_WriteCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriter", "WriteCallbackInfo");
        }
        inline app::XmlSerializationWriter_WriteCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationWriter_WriteCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationWriter_WriteCallbackInfo
} // namespace app::classes::types