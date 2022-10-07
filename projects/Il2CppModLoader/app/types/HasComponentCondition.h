#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasComponentCondition {
        namespace {
            app::HasComponentCondition__Class* type_info_ref = nullptr;
        }
        app::HasComponentCondition__Class** type_info = &type_info_ref;
        inline app::HasComponentCondition__Class* get_class() {
            return il2cpp::get_class<app::HasComponentCondition__Class>(type_info, "", "HasComponentCondition");
        }
        inline app::HasComponentCondition* create() {
            return il2cpp::create_object<app::HasComponentCondition>(get_class());
        }
    } // namespace HasComponentCondition
} // namespace app::classes::types