#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyLevels__Enum {
        namespace {
            app::DifficultyLevels__Enum__Class* type_info_ref = nullptr;
        }
        app::DifficultyLevels__Enum__Class** type_info = &type_info_ref;
        inline app::DifficultyLevels__Enum__Class* get_class() {
            return il2cpp::get_class<app::DifficultyLevels__Enum__Class>(type_info, "", "DifficultyLevels");
        }
        inline app::DifficultyLevels__Enum* create() {
            return il2cpp::create_object<app::DifficultyLevels__Enum>(get_class());
        }
    } // namespace DifficultyLevels__Enum
} // namespace app::classes::types
