#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntityBehaviour__Array {
        namespace {
            app::IEntityBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::IEntityBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::IEntityBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityBehaviour__Array__Class>(type_info, "Moon", "IEntityBehaviour[]");
        }
        inline app::IEntityBehaviour__Array* create() {
            return il2cpp::create_object<app::IEntityBehaviour__Array>(get_class());
        }
    } // namespace IEntityBehaviour__Array
} // namespace app::classes::types