#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinDeathsManager {
    IL2CPP_REGISTER_METHOD(0x006FF490, void, FakeADeathHere, (app::SeinDeathsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FF4A0, void, Awake, (app::SeinDeathsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FF640, void, OnDestroy, (app::SeinDeathsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FF820, void, OnGameReset, (app::SeinDeathsManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A480, SeinDeathsManager_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006FF8D0, void, Serialize, (app::SeinDeathsManager * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00700080, void, OnDeath, ())
    IL2CPP_REGISTER_METHOD(0x007001D0, void, RecordDeath, (app::SeinDeathsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00700470, void, ctor, (app::SeinDeathsManager * this_ptr))
} // namespace app::classes::SeinDeathsManager
