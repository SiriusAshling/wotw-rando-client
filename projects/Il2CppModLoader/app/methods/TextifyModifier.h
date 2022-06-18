#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextifyModifier {
    IL2CPP_REGISTER_METHOD(0x010E8E80, float, GetQuadExpandSize, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8E90, void, SetProperties, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8F50, void, ctor, (app::TextifyModifier * this_ptr))
}