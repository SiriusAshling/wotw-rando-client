#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::WandererHandRewardBehaviour {
    IL2CPP_REGISTER_METHOD(0x011A2F00, void, OnEntityInitialized, (app::WandererHandRewardBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011A3090, void, OnEnter, (app::WandererHandRewardBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011A33E0, void, HandOutFinish, (app::WandererHandRewardBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B100, WandererHandRewardBehaviour_HandOutFinish__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011A3600, void, RewardTakenOrTimedOut, (app::WandererHandRewardBehaviour * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x011A3690, app::BehaviourStatus__Enum, OnExecute, (app::WandererHandRewardBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererHandRewardBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011A3950, void, ctor, (app::WandererHandRewardBehaviour * this_ptr))
}