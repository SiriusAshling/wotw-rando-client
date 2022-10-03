#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::Grayscale {
    IL2CPP_REGISTER_METHOD(0x030467B0, void, OnRenderImage, (app::Grayscale * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030469A0, app::String*, GetShaderName, (app::Grayscale * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03046A20, void, ctor, (app::Grayscale * this_ptr))
} // namespace app::classes::Colorful::Grayscale
