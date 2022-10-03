#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderComponent__Array {
        namespace {
            app::UberShaderComponent__Array__Class* type_info_ref = nullptr;
        }
        app::UberShaderComponent__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderComponent__Array__Class>(type_info, "", "UberShaderComponent[]");
        }
        inline app::UberShaderComponent__Array* create() {
            return il2cpp::create_object<app::UberShaderComponent__Array>(get_class());
        }
    } // namespace UberShaderComponent__Array
} // namespace app::classes::types
