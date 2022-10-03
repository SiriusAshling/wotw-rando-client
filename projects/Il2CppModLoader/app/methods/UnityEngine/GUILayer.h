#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::GUILayer {
    IL2CPP_REGISTER_METHOD(0x02526DE0, app::GUIElement*, HitTest_1, (app::GUILayer * this_ptr, app::Vector3 screen_position))
    IL2CPP_REGISTER_METHOD(0x02526E50, app::GUIElement*, HitTest_2, (app::GUILayer * this_ptr, app::Vector2 screen_position))
    IL2CPP_REGISTER_METHOD(0x02526EB0, app::GUIElement*, HitTest_Injected, (app::GUILayer * this_ptr, app::Vector2* screen_position))
} // namespace app::classes::UnityEngine::GUILayer
