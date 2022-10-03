#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Antialiasing {
    IL2CPP_REGISTER_METHOD(0x02510990, app::Material*, CurrentAAMaterial, (app::Antialiasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02510A00, bool, CheckResources, (app::Antialiasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02510BA0, void, OnRenderImage, (app::Antialiasing * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02511190, void, ctor, (app::Antialiasing * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Antialiasing
