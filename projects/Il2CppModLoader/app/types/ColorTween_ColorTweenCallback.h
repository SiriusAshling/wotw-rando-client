#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorTween_ColorTweenCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorTween_ColorTweenCallback__Class** type_info;
        inline app::ColorTween_ColorTweenCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorTween_ColorTweenCallback__Class>(type_info, "UnityEngine.UI.CoroutineTween", "ColorTween", "ColorTweenCallback");
        }
        inline app::ColorTween_ColorTweenCallback* create() {
            return il2cpp::create_object<app::ColorTween_ColorTweenCallback>(get_class());
        }
    } // namespace ColorTween_ColorTweenCallback
} // namespace app::classes::types