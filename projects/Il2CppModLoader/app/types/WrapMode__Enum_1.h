#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WrapMode__Enum_1 {
        namespace {
            app::WrapMode__Enum_1__Class* type_info_ref = nullptr;
        }
        app::WrapMode__Enum_1__Class** type_info = &type_info_ref;
        inline app::WrapMode__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::WrapMode__Enum_1__Class>(type_info, "Moon.Timeline", "WrapMode");
        }
        inline app::WrapMode__Enum_1* create() {
            return il2cpp::create_object<app::WrapMode__Enum_1>(get_class());
        }
    } // namespace WrapMode__Enum_1
} // namespace app::classes::types