#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::FlameSpark {
    IL2CPP_REGISTER_METHOD(0x012239E0, void, OnEnable, (app::FlameSpark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01223C80, void, FixedUpdate, (app::FlameSpark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01223F60, void, ctor, (app::FlameSpark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01223F80, void, cctor, ())
} // namespace app::classes::Moon::FlameSpark
