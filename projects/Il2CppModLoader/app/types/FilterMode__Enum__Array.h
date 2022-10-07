#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FilterMode__Enum__Array {
        namespace {
            app::FilterMode__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::FilterMode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::FilterMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::FilterMode__Enum__Array__Class>(type_info, "UnityEngine", "FilterMode[]");
        }
        inline app::FilterMode__Enum__Array* create() {
            return il2cpp::create_object<app::FilterMode__Enum__Array>(get_class());
        }
    } // namespace FilterMode__Enum__Array
} // namespace app::classes::types