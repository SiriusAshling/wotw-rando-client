#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlMemberMapping__Array {
        namespace {
            app::XmlMemberMapping__Array__Class* type_info_ref = nullptr;
        }
        app::XmlMemberMapping__Array__Class** type_info = &type_info_ref;
        inline app::XmlMemberMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlMemberMapping__Array__Class>(type_info, "System.Xml.Serialization", "XmlMemberMapping[]");
        }
        inline app::XmlMemberMapping__Array* create() {
            return il2cpp::create_object<app::XmlMemberMapping__Array>(get_class());
        }
    } // namespace XmlMemberMapping__Array
} // namespace app::classes::types