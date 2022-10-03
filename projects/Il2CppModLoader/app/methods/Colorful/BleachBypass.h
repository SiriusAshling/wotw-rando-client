#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::BleachBypass {
    IL2CPP_REGISTER_METHOD(0x0303F4C0, void, OnRenderImage, (app::BleachBypass * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0303F630, app::String*, GetShaderName, (app::BleachBypass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, (app::BleachBypass * this_ptr))
} // namespace app::classes::Colorful::BleachBypass
