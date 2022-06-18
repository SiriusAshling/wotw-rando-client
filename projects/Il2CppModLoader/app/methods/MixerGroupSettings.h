#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MixerGroupSettings {
    IL2CPP_REGISTER_METHOD(0x00126320, void, MultiplyBlendWith, (app::MixerGroupSettings__Boxed * this_ptr, app::MixerGroupSettings settings, float weight))
    IL2CPP_REGISTER_METHOD(0x001263C0, void, ApplyGroupSettingsToMixer, (app::MixerGroupSettings__Boxed * this_ptr, app::AudioMixer * mixer))
    IL2CPP_REGISTER_METHOD(0x001263D0, void, SetFloatConditional, (app::MixerGroupSettings__Boxed * this_ptr, app::AudioMixer * mixer, app::String * str, float val, float * cache))
    IL2CPP_REGISTER_METHOD(0x001263E0, void, ApplyGroupSettingsToMixerCached, (app::MixerGroupSettings__Boxed * this_ptr, app::AudioMixer * mixer))
    IL2CPP_REGISTER_METHOD(0x001263F0, void, Reset, (app::MixerGroupSettings__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132C750, void, cctor, ())
}