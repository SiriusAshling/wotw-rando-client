#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanChangeDifficultyCondition {
        namespace {
            app::CanChangeDifficultyCondition__Class* type_info_ref = nullptr;
        }
        app::CanChangeDifficultyCondition__Class** type_info = &type_info_ref;
        inline app::CanChangeDifficultyCondition__Class* get_class() {
            return il2cpp::get_class<app::CanChangeDifficultyCondition__Class>(type_info, "", "CanChangeDifficultyCondition");
        }
        inline app::CanChangeDifficultyCondition* create() {
            return il2cpp::create_object<app::CanChangeDifficultyCondition>(get_class());
        }
    } // namespace CanChangeDifficultyCondition
} // namespace app::classes::types
