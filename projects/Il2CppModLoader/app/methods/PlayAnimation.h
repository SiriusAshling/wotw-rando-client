#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayAnimation {
    IL2CPP_REGISTER_METHOD(0x02130880, void, OnEnable, (app::PlayAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02130900, void, OnDisable, (app::PlayAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02130930, void, ctor, (app::PlayAnimation * this_ptr))
} // namespace app::classes::PlayAnimation
