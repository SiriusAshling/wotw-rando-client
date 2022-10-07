#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildHasPrologueCondition {
        namespace {
            app::BuildHasPrologueCondition__Class* type_info_ref = nullptr;
        }
        app::BuildHasPrologueCondition__Class** type_info = &type_info_ref;
        inline app::BuildHasPrologueCondition__Class* get_class() {
            return il2cpp::get_class<app::BuildHasPrologueCondition__Class>(type_info, "", "BuildHasPrologueCondition");
        }
        inline app::BuildHasPrologueCondition* create() {
            return il2cpp::create_object<app::BuildHasPrologueCondition>(get_class());
        }
    } // namespace BuildHasPrologueCondition
} // namespace app::classes::types