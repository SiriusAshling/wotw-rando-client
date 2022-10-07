#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrAttributeEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrAttributeEntry__Array__Class** type_info;
        inline app::XdrBuilder_XdrAttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XdrBuilder_XdrAttributeEntry__Array__Class>(type_info, "System.Xml.Schema", "XdrBuilder+XdrAttributeEntry[]");
        }
        inline app::XdrBuilder_XdrAttributeEntry__Array* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrAttributeEntry__Array>(get_class());
        }
    } // namespace XdrBuilder_XdrAttributeEntry__Array
} // namespace app::classes::types