#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Damage__Array {
        namespace {
            app::Damage__Array__Class* type_info_ref = nullptr;
        }
        app::Damage__Array__Class** type_info = &type_info_ref;
        inline app::Damage__Array__Class* get_class() {
            return il2cpp::get_class<app::Damage__Array__Class>(type_info, "", "Damage[]");
        }
        inline app::Damage__Array* create() {
            return il2cpp::create_object<app::Damage__Array>(get_class());
        }
    } // namespace Damage__Array
} // namespace app::classes::types