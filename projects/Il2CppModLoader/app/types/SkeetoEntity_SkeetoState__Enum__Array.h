#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity_SkeetoState__Enum__Array {
        namespace {
            app::SkeetoEntity_SkeetoState__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::SkeetoEntity_SkeetoState__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SkeetoEntity_SkeetoState__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEntity_SkeetoState__Enum__Array__Class>(type_info, "", "SkeetoEntity+SkeetoState[]");
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Array* create() {
            return il2cpp::create_object<app::SkeetoEntity_SkeetoState__Enum__Array>(get_class());
        }
    } // namespace SkeetoEntity_SkeetoState__Enum__Array
} // namespace app::classes::types
