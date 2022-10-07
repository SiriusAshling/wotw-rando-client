#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategory__Enum__Array {
        namespace {
            app::UberShaderCategory__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UberShaderCategory__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderCategory__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategory__Enum__Array__Class>(type_info, "", "UberShaderCategory[]");
        }
        inline app::UberShaderCategory__Enum__Array* create() {
            return il2cpp::create_object<app::UberShaderCategory__Enum__Array>(get_class());
        }
    } // namespace UberShaderCategory__Enum__Array
} // namespace app::classes::types