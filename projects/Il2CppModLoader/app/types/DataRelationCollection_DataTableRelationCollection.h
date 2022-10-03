#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelationCollection_DataTableRelationCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelationCollection_DataTableRelationCollection__Class** type_info;
        inline app::DataRelationCollection_DataTableRelationCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRelationCollection_DataTableRelationCollection__Class>(type_info, "System.Data", "DataRelationCollection", "DataTableRelationCollection");
        }
        inline app::DataRelationCollection_DataTableRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection_DataTableRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection_DataTableRelationCollection
} // namespace app::classes::types
