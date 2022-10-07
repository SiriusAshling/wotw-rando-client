#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategory__Enum {
        namespace {
            app::UberShaderCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderCategory__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategory__Enum__Class>(type_info, "", "UberShaderCategory");
        }
        inline app::UberShaderCategory__Enum* create() {
            return il2cpp::create_object<app::UberShaderCategory__Enum>(get_class());
        }
        inline app::UberShaderCategory__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCategory__Enum__Array>(get_class(), size);
        }
        inline app::UberShaderCategory__Enum__Array* create_array(const std::vector<app::UberShaderCategory__Enum*>& items) {
            return il2cpp::array_new<app::UberShaderCategory__Enum__Array>(get_class(), items);
        }
    } // namespace UberShaderCategory__Enum
} // namespace app::classes::types
