#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CharacterAnimationState {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::TextureAnimationWithTransitions*, get_AnimationToPlay, (app::CharacterAnimationState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterAnimationState * this_ptr))
} // namespace app::classes::CharacterAnimationState
