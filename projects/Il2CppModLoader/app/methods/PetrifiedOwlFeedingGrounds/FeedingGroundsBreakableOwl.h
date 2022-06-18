#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakableOwl {
    IL2CPP_REGISTER_METHOD(0x01782DA0, void, OnDisable, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01783340, void, StartShake, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BEE8, FeedingGroundsBreakableOwl_StartShake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01783360, void, PlayShakeIdle, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047320F8, FeedingGroundsBreakableOwl_PlayShakeIdle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017833A0, void, StartBreak, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047232A0, FeedingGroundsBreakableOwl_StartBreak__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017833C0, void, PlayBrokenIdle, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776450, FeedingGroundsBreakableOwl_PlayBrokenIdle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01783400, void, ResetState, (app::FeedingGroundsBreakableOwl * this_ptr, bool alerted))
    IL2CPP_REGISTER_METHOD(0x01783F10, void, StopCurrentTimeline, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01783FE0, void, PlayIdle, (app::FeedingGroundsBreakableOwl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01784020, void, PlayTimeline, (app::FeedingGroundsBreakableOwl * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FeedingGroundsBreakableOwl * this_ptr))
}