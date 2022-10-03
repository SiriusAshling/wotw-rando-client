#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AllContainer_1_CartStopper_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_CartStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799A08, AllContainer_1_CartStopper__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::CartStopper*, get_Item, (app::AllContainer_1_CartStopper_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04728C10, AllContainer_1_CartStopper__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_CartStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784E80, AllContainer_1_CartStopper__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_CartStopper_ * this_ptr, app::CartStopper* item))
    IL2CPP_REGISTER_METHODINFO(0x047403E0, AllContainer_1_CartStopper__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_CartStopper_ * this_ptr, app::CartStopper* item))
    IL2CPP_REGISTER_METHODINFO(0x0475D5B8, AllContainer_1_CartStopper__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_CartStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757660, AllContainer_1_CartStopper___ctor__MethodInfo)
} // namespace app::classes::AllContainer_1_CartStopper_
