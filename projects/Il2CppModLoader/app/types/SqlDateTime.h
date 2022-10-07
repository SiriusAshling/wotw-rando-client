#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDateTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDateTime__Class** type_info;
        inline app::SqlDateTime__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTime__Class>(type_info, "System.Data.SqlTypes", "SqlDateTime");
        }
        inline app::SqlDateTime* create() {
            return il2cpp::create_object<app::SqlDateTime>(get_class());
        }
        inline app::SqlDateTime__Boxed* box(app::SqlDateTime value) {
            return il2cpp::box_value<app::SqlDateTime__Boxed>(get_class(), value);
        }
        inline app::SqlDateTime__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlDateTime__Array>(get_class(), size);
        }
        inline app::SqlDateTime__Array* create_array(const std::vector<app::SqlDateTime>& items) {
            return il2cpp::array_new<app::SqlDateTime__Array>(get_class(), items);
        }
    } // namespace SqlDateTime
} // namespace app::classes::types