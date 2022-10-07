#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReader {
        namespace {
            app::XmlNodeReader__Class* type_info_ref = nullptr;
        }
        app::XmlNodeReader__Class** type_info = &type_info_ref;
        inline app::XmlNodeReader__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReader__Class>(type_info, "System.Xml", "XmlNodeReader");
        }
        inline app::XmlNodeReader* create() {
            return il2cpp::create_object<app::XmlNodeReader>(get_class());
        }
    } // namespace XmlNodeReader
} // namespace app::classes::types