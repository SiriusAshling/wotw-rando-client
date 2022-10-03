#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TextBoxExtended {
    IL2CPP_REGISTER_METHOD(0x010E3CF0, app::Rect, GetRect, (app::TextBox * text_box))
    IL2CPP_REGISTER_METHOD(0x010E4180, app::Vector2, ComputeAnchor, (app::TextBox * text_box))
    IL2CPP_REGISTER_METHOD(0x010E41F0, int32_t, CountLetters_1, (app::TextBox * text_box))
    IL2CPP_REGISTER_METHOD(0x010E4290, int32_t, CountLetters_2, (app::Text_1 * text_box))
} // namespace app::classes::TextBoxExtended
