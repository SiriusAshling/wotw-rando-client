#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::TransferMotion {
    IL2CPP_REGISTER_METHOD(0x02049B40, void, OnEnable, (app::TransferMotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02049C20, void, Update, (app::TransferMotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02049F80, void, ctor, (app::TransferMotion * this_ptr))
} // namespace app::classes::RootMotion::Demos::TransferMotion
