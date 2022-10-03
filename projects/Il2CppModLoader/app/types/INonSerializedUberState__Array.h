#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INonSerializedUberState__Array {
        namespace {
            app::INonSerializedUberState__Array__Class* type_info_ref = nullptr;
        }
        app::INonSerializedUberState__Array__Class** type_info = &type_info_ref;
        inline app::INonSerializedUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::INonSerializedUberState__Array__Class>(type_info, "Moon", "INonSerializedUberState[]");
        }
        inline app::INonSerializedUberState__Array* create() {
            return il2cpp::create_object<app::INonSerializedUberState__Array>(get_class());
        }
    } // namespace INonSerializedUberState__Array
} // namespace app::classes::types
