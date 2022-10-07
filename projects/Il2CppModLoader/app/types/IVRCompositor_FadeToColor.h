#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_FadeToColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_FadeToColor__Class** type_info;
        inline app::IVRCompositor_FadeToColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_FadeToColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_FadeToColor");
        }
        inline app::IVRCompositor_FadeToColor* create() {
            return il2cpp::create_object<app::IVRCompositor_FadeToColor>(get_class());
        }
    } // namespace IVRCompositor_FadeToColor
} // namespace app::classes::types