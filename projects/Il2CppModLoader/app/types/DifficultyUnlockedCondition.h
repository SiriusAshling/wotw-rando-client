#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyUnlockedCondition {
        namespace {
            app::DifficultyUnlockedCondition__Class* type_info_ref = nullptr;
        }
        app::DifficultyUnlockedCondition__Class** type_info = &type_info_ref;
        inline app::DifficultyUnlockedCondition__Class* get_class() {
            return il2cpp::get_class<app::DifficultyUnlockedCondition__Class>(type_info, "", "DifficultyUnlockedCondition");
        }
        inline app::DifficultyUnlockedCondition* create() {
            return il2cpp::create_object<app::DifficultyUnlockedCondition>(get_class());
        }
    } // namespace DifficultyUnlockedCondition
} // namespace app::classes::types
