#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RisingWaterTrigger {
    IL2CPP_REGISTER_METHOD(0x01358590, void, FixedUpdate, (app::RisingWaterTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CBAC0, void, Serialize, (app::RisingWaterTrigger * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::RisingWaterTrigger * this_ptr))
} // namespace app::classes::RisingWaterTrigger
