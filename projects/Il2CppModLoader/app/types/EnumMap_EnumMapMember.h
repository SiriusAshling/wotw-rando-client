#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumMap_EnumMapMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumMap_EnumMapMember__Class** type_info;
        inline app::EnumMap_EnumMapMember__Class* get_class() {
            return il2cpp::get_nested_class<app::EnumMap_EnumMapMember__Class>(type_info, "System.Xml.Serialization", "EnumMap", "EnumMapMember");
        }
        inline app::EnumMap_EnumMapMember* create() {
            return il2cpp::create_object<app::EnumMap_EnumMapMember>(get_class());
        }
        inline app::EnumMap_EnumMapMember__Array* create_array(int size) {
            return il2cpp::array_new<app::EnumMap_EnumMapMember__Array>(get_class(), size);
        }
        inline app::EnumMap_EnumMapMember__Array* create_array(const std::vector<app::EnumMap_EnumMapMember*>& items) {
            return il2cpp::array_new<app::EnumMap_EnumMapMember__Array>(get_class(), items);
        }
    } // namespace EnumMap_EnumMapMember
} // namespace app::classes::types