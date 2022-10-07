#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionType__Enum__Array {
        namespace {
            app::UberStateConditionType__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateConditionType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UberStateConditionType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionType__Enum__Array__Class>(type_info, "", "UberStateConditionType[]");
        }
        inline app::UberStateConditionType__Enum__Array* create() {
            return il2cpp::create_object<app::UberStateConditionType__Enum__Array>(get_class());
        }
    } // namespace UberStateConditionType__Enum__Array
} // namespace app::classes::types