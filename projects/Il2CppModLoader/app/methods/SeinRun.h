#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinRun {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6EE0, app::SeinRunPuppet*, get_Puppet, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_SpriteMirror, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6FA0, bool, get_HasSharplyChangedDirection, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6FD0, void, Serialize, (app::SeinRun * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005D7040, void, OnSetReferenceToSein, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D7120, void, OnEnter, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D71A0, void, HandleControllerInput, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D77D0, void, CheckForSharpTurn, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D7980, void, UpdateCharacterState, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8490, bool, ShouldRunAnimationPlaying, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DD38, SeinRun_ShouldRunAnimationPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D85D0, bool, ShouldJogAnimationPlay, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DDB0, SeinRun_ShouldJogAnimationPlay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D8710, bool, ShouldWalkAnimationPlay, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796378, SeinRun_ShouldWalkAnimationPlay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D8850, bool, ShouldAnimationKeepPlaying, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764608, SeinRun_ShouldAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D8980, void, ctor, (app::SeinRun * this_ptr))
} // namespace app::classes::SeinRun
