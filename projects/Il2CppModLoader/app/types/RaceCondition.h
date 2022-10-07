#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceCondition {
        namespace {
            app::RaceCondition__Class* type_info_ref = nullptr;
        }
        app::RaceCondition__Class** type_info = &type_info_ref;
        inline app::RaceCondition__Class* get_class() {
            return il2cpp::get_class<app::RaceCondition__Class>(type_info, "", "RaceCondition");
        }
        inline app::RaceCondition* create() {
            return il2cpp::create_object<app::RaceCondition>(get_class());
        }
    } // namespace RaceCondition
} // namespace app::classes::types