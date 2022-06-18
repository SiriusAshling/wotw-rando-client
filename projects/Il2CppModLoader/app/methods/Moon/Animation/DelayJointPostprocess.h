#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Animation::DelayJointPostprocess {
    IL2CPP_REGISTER_METHOD(0x01B00810, void, OnUpdateAnimatorPostprocessData, (app::DelayJointPostprocess * this_ptr, app::Playable playable, app::AnimatorPostprocessUpdateData update_data))
    IL2CPP_REGISTER_METHOD(0x01B00BA0, void, OnAllocateJobData, (app::DelayJointPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B00F80, void, OnDeallocateJobData, (app::DelayJointPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B01180, void, ctor, (app::DelayJointPostprocess * this_ptr))
}