#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CatlikeCoding::TextBox::AppliedTextStyle {
    IL2CPP_REGISTER_METHOD(0x0011DFB0, void, Apply, (app::AppliedTextStyle__Boxed * this_ptr, app::TextStyle * style, app::TextRenderer * renderer))
    IL2CPP_REGISTER_METHOD(0x00123DD0, void, ApplyOnTop, (app::AppliedTextStyle__Boxed * this_ptr, app::TextStyle * style, app::Color base_color))
}