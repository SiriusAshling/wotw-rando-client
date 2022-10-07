#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_XsdEntry__Class** type_info;
        inline app::XsdBuilder_XsdEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdEntry__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdEntry");
        }
        inline app::XsdBuilder_XsdEntry* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdEntry>(get_class());
        }
        inline app::XsdBuilder_XsdEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XsdBuilder_XsdEntry__Array>(get_class(), size);
        }
        inline app::XsdBuilder_XsdEntry__Array* create_array(const std::vector<app::XsdBuilder_XsdEntry*>& items) {
            return il2cpp::array_new<app::XsdBuilder_XsdEntry__Array>(get_class(), items);
        }
    } // namespace XsdBuilder_XsdEntry
} // namespace app::classes::types