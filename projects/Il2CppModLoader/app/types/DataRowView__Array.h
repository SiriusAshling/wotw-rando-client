#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowView__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowView__Array__Class** type_info;
        inline app::DataRowView__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRowView__Array__Class>(type_info, "System.Data", "DataRowView[]");
        }
        inline app::DataRowView__Array* create() {
            return il2cpp::create_object<app::DataRowView__Array>(get_class());
        }
    } // namespace DataRowView__Array
} // namespace app::classes::types