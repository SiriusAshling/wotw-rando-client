#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedEventHandler {
        namespace {
            app::XmlNodeChangedEventHandler__Class* type_info_ref = nullptr;
        }
        app::XmlNodeChangedEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlNodeChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedEventHandler__Class>(type_info, "System.Xml", "XmlNodeChangedEventHandler");
        }
        inline app::XmlNodeChangedEventHandler* create() {
            return il2cpp::create_object<app::XmlNodeChangedEventHandler>(get_class());
        }
    } // namespace XmlNodeChangedEventHandler
} // namespace app::classes::types