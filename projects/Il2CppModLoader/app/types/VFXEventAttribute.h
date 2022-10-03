#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VFXEventAttribute {
        namespace {
            app::VFXEventAttribute__Class* type_info_ref = nullptr;
        }
        app::VFXEventAttribute__Class** type_info = &type_info_ref;
        inline app::VFXEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::VFXEventAttribute__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXEventAttribute");
        }
        inline app::VFXEventAttribute* create() {
            return il2cpp::create_object<app::VFXEventAttribute>(get_class());
        }
    } // namespace VFXEventAttribute
} // namespace app::classes::types
