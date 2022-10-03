#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MudkisserFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00873B70, void, AllowCancel, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D6C8, MudkisserFallReactionBehaviour_AllowCancel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00873B80, void, DisallowCancel, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704930, MudkisserFallReactionBehaviour_DisallowCancel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00873B90, void, StartTimeline, (app::MudkisserFallReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x00874120, void, ResetTimeline, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00874610, void, EndBehaviour, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04773050, MudkisserFallReactionBehaviour_EndBehaviour__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00874940, void, OnInitializeTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00874B00, void, OnEnterTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00874E70, void, GotHit, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00874EF0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00875720, bool, ShouldPauseLocomotion, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875730, void, OnExitTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00875740, void, ctor, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_0, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769A08, MudkisserFallReactionBehaviour__OnEnterTask_b__24_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_1, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B9A0, MudkisserFallReactionBehaviour__OnEnterTask_b__24_1__MethodInfo)
} // namespace app::classes::MudkisserFallReactionBehaviour
