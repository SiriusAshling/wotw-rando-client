#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldInfo_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FieldInfo_1__Array__Class** type_info;
        inline app::FieldInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FieldInfo_1__Array__Class>(type_info, "System.Reflection", "FieldInfo[]");
        }
        inline app::FieldInfo_1__Array* create() {
            return il2cpp::create_object<app::FieldInfo_1__Array>(get_class());
        }
        inline app::FieldInfo_1__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::FieldInfo_1__Array__Array>(get_class(), size);
        }
    } // namespace FieldInfo_1__Array
} // namespace app::classes::types
