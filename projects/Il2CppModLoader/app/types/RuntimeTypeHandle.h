#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeTypeHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeTypeHandle__Class** type_info;
        inline app::RuntimeTypeHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeTypeHandle__Class>(type_info, "System", "RuntimeTypeHandle");
        }
        inline app::RuntimeTypeHandle* create() {
            return il2cpp::create_object<app::RuntimeTypeHandle>(get_class());
        }
        inline app::RuntimeTypeHandle__Boxed* box(app::RuntimeTypeHandle value) {
            return il2cpp::box_value<app::RuntimeTypeHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeTypeHandle
} // namespace app::classes::types
