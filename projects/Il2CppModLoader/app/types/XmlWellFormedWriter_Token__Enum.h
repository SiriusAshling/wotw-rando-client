#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_Token__Enum {
        namespace {
            app::XmlWellFormedWriter_Token__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlWellFormedWriter_Token__Enum__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_Token__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_Token__Enum__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "Token");
        }
        inline app::XmlWellFormedWriter_Token__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_Token__Enum>(get_class());
        }
    } // namespace XmlWellFormedWriter_Token__Enum
} // namespace app::classes::types
