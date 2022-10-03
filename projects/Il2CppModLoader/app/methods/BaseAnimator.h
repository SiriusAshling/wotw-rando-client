#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BaseAnimator {
    IL2CPP_REGISTER_METHOD(0x00F83CB0, app::AnimatorDriver*, get_AnimatorDriver, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F40, bool, get_IsInitialized, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F50, void, set_IsInitialized, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F83F60, bool, get_IsPlaying, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F70, void, set_IsPlaying, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F83F80, bool, get_IsAnimationDriverPlaying, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F90, bool, get_IsInScene, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83FA0, void, set_IsInScene, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_SampledByParent, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_SampledByParent, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::BaseAnimator*, get_ParentAnimator, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_ParentAnimator, (app::BaseAnimator * this_ptr, app::BaseAnimator* value))
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_CurrentTime, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008663E0, void, set_CurrentTime, (app::BaseAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F83FB0, void, OnPoolSpawned, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84000, void, OnPoolDespawned, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84010, void, ValidateExtendedDuration, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84100, void, OnDriverPlayStateChanged, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0474F7F8, BaseAnimator_OnDriverPlayStateChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F84140, void, RegisterUpdateHandler, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F842C0, void, UnregisterUpdateHandler, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AA3D0, void, OnEnable, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84000, void, OnDisable, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84370, void, Awake, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84480, void, UpdateMoonReady, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84500, void, Start, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F845E0, void, Play, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84640, void, Stop, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84670, void, Pause, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F846A0, void, NotifyOnStopEvent, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F846C0, void, OnDestroy, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84890, void, OnFixedUpdate, (app::BaseAnimator * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F84950, void, Initialize, (app::BaseAnimator * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDurationAndTimeCache, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99210, void, OnStartPlay, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCA8C0, void, OnStopPlay, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84980, float, get_Speed, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84A40, void, set_Speed, (app::BaseAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F84B00, float, AnimationCurveTimeToTime, (app::BaseAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00F84BE0, float, TimeToAnimationCurveTime, (app::BaseAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00F84C20, float, get_ExtendedDuration, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84C60, void, set_ExtendedDuration, (app::BaseAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F84DF0, float, get_EffectiveDuration, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84EE0, app::TimelineEntity*, Convert, (app::BaseAnimator * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_IsSuspended, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_IsSuspended, (app::BaseAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostTimeSlicedEnable, (app::BaseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F84FD0, void, ctor, (app::BaseAnimator * this_ptr))
} // namespace app::classes::BaseAnimator
