#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon_NPCType__Enum {
        namespace {
            app::ScreenshotIcon_NPCType__Enum__Class* type_info_ref = nullptr;
        }
        app::ScreenshotIcon_NPCType__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenshotIcon_NPCType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenshotIcon_NPCType__Enum__Class>(type_info, "", "ScreenshotIcon", "NPCType");
        }
        inline app::ScreenshotIcon_NPCType__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIcon_NPCType__Enum>(get_class());
        }
        inline app::ScreenshotIcon_NPCType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIcon_NPCType__Enum__Array>(get_class(), size);
        }
    } // namespace ScreenshotIcon_NPCType__Enum
} // namespace app::classes::types
