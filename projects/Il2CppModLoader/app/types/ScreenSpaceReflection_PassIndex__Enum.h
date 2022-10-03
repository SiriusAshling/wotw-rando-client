#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_PassIndex__Enum {
        namespace {
            app::ScreenSpaceReflection_PassIndex__Enum__Class* type_info_ref = nullptr;
        }
        app::ScreenSpaceReflection_PassIndex__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_PassIndex__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_PassIndex__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "PassIndex");
        }
        inline app::ScreenSpaceReflection_PassIndex__Enum* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_PassIndex__Enum>(get_class());
        }
    } // namespace ScreenSpaceReflection_PassIndex__Enum
} // namespace app::classes::types
