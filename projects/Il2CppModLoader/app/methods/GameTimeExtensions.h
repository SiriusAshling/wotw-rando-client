#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GameTimeExtensions {
    IL2CPP_REGISTER_METHOD(0x02553510, void, ExecuteAfter, (app::MonoBehaviour * behaviour, float time, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x02553690, app::IEnumerator*, ExecuteAfterAsync, (float time, app::Action* action))
} // namespace app::classes::GameTimeExtensions
