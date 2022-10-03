#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberInfo_1__Class** type_info;
        inline app::MemberInfo_1__Class* get_class() {
            return il2cpp::get_class<app::MemberInfo_1__Class>(type_info, "System.Reflection", "MemberInfo");
        }
        inline app::MemberInfo_1* create() {
            return il2cpp::create_object<app::MemberInfo_1>(get_class());
        }
        inline app::MemberInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::MemberInfo_1__Array>(get_class(), size);
        }
    } // namespace MemberInfo_1
} // namespace app::classes::types
