#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldHierarchy {
        namespace {
            app::UberShaderWorldHierarchy__Class* type_info_ref = nullptr;
        }
        app::UberShaderWorldHierarchy__Class** type_info = &type_info_ref;
        inline app::UberShaderWorldHierarchy__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldHierarchy__Class>(type_info, "", "UberShaderWorldHierarchy");
        }
        inline app::UberShaderWorldHierarchy* create() {
            return il2cpp::create_object<app::UberShaderWorldHierarchy>(get_class());
        }
    } // namespace UberShaderWorldHierarchy
} // namespace app::classes::types