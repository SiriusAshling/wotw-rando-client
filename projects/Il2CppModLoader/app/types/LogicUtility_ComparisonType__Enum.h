#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogicUtility_ComparisonType__Enum {
        namespace {
            app::LogicUtility_ComparisonType__Enum__Class* type_info_ref = nullptr;
        }
        app::LogicUtility_ComparisonType__Enum__Class** type_info = &type_info_ref;
        inline app::LogicUtility_ComparisonType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LogicUtility_ComparisonType__Enum__Class>(type_info, "", "LogicUtility", "ComparisonType");
        }
        inline app::LogicUtility_ComparisonType__Enum* create() {
            return il2cpp::create_object<app::LogicUtility_ComparisonType__Enum>(get_class());
        }
    } // namespace LogicUtility_ComparisonType__Enum
} // namespace app::classes::types