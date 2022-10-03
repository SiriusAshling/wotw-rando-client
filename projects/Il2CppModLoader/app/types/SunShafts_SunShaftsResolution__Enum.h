#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SunShafts_SunShaftsResolution__Enum {
        namespace {
            app::SunShafts_SunShaftsResolution__Enum__Class* type_info_ref = nullptr;
        }
        app::SunShafts_SunShaftsResolution__Enum__Class** type_info = &type_info_ref;
        inline app::SunShafts_SunShaftsResolution__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SunShafts_SunShaftsResolution__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "SunShafts", "SunShaftsResolution");
        }
        inline app::SunShafts_SunShaftsResolution__Enum* create() {
            return il2cpp::create_object<app::SunShafts_SunShaftsResolution__Enum>(get_class());
        }
    } // namespace SunShafts_SunShaftsResolution__Enum
} // namespace app::classes::types
