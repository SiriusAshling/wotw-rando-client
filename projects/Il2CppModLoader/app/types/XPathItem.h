#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathItem__Class** type_info;
        inline app::XPathItem__Class* get_class() {
            return il2cpp::get_class<app::XPathItem__Class>(type_info, "System.Xml.XPath", "XPathItem");
        }
        inline app::XPathItem* create() {
            return il2cpp::create_object<app::XPathItem>(get_class());
        }
        inline app::XPathItem__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathItem__Array>(get_class(), size);
        }
        inline app::XPathItem__Array* create_array(const std::vector<app::XPathItem*>& items) {
            return il2cpp::array_new<app::XPathItem__Array>(get_class(), items);
        }
    } // namespace XPathItem
} // namespace app::classes::types