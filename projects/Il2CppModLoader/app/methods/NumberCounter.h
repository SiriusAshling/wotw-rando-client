#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NumberCounter {
    IL2CPP_REGISTER_METHOD(0x0060D080, void, Serialize, (app::NumberCounter * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::NumberCounter * this_ptr))
} // namespace app::classes::NumberCounter
