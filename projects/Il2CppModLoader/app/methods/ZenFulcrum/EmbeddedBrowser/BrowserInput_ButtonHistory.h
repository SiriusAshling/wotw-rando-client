#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserInput_ButtonHistory {
    IL2CPP_REGISTER_METHOD(0x01C748A0, void, ButtonPress, (app::BrowserInput_ButtonHistory * this_ptr, app::Vector3 mouse_pos, app::IBrowserUI* ui_handler, app::Vector2 browser_size))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BrowserInput_ButtonHistory * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserInput_ButtonHistory
