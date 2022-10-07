#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IClipper__Array {
        namespace {
            app::IClipper__Array__Class* type_info_ref = nullptr;
        }
        app::IClipper__Array__Class** type_info = &type_info_ref;
        inline app::IClipper__Array__Class* get_class() {
            return il2cpp::get_class<app::IClipper__Array__Class>(type_info, "UnityEngine.UI", "IClipper[]");
        }
        inline app::IClipper__Array* create() {
            return il2cpp::create_object<app::IClipper__Array>(get_class());
        }
    } // namespace IClipper__Array
} // namespace app::classes::types