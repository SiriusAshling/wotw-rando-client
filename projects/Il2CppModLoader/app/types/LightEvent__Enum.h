#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightEvent__Enum {
        namespace {
            app::LightEvent__Enum__Class* type_info_ref = nullptr;
        }
        app::LightEvent__Enum__Class** type_info = &type_info_ref;
        inline app::LightEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightEvent__Enum__Class>(type_info, "UnityEngine.Rendering", "LightEvent");
        }
        inline app::LightEvent__Enum* create() {
            return il2cpp::create_object<app::LightEvent__Enum>(get_class());
        }
    } // namespace LightEvent__Enum
} // namespace app::classes::types