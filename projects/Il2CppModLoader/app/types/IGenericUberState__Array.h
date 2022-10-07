#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGenericUberState__Array {
        namespace {
            app::IGenericUberState__Array__Class* type_info_ref = nullptr;
        }
        app::IGenericUberState__Array__Class** type_info = &type_info_ref;
        inline app::IGenericUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IGenericUberState__Array__Class>(type_info, "Moon", "IGenericUberState[]");
        }
        inline app::IGenericUberState__Array* create() {
            return il2cpp::create_object<app::IGenericUberState__Array>(get_class());
        }
    } // namespace IGenericUberState__Array
} // namespace app::classes::types