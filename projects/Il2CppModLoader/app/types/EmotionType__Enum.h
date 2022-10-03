#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmotionType__Enum {
        namespace {
            app::EmotionType__Enum__Class* type_info_ref = nullptr;
        }
        app::EmotionType__Enum__Class** type_info = &type_info_ref;
        inline app::EmotionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmotionType__Enum__Class>(type_info, "", "EmotionType");
        }
        inline app::EmotionType__Enum* create() {
            return il2cpp::create_object<app::EmotionType__Enum>(get_class());
        }
    } // namespace EmotionType__Enum
} // namespace app::classes::types
