#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::DiscoverAreasEntity {
    IL2CPP_REGISTER_METHOD(0x00764800, app::SpellUIExperience*, get_Experience, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00764930, void, ReleaseTexture, (app::DiscoverAreasEntity * this_ptr, app::AreaMapCanvas* canvas))
    IL2CPP_REGISTER_METHOD(0x00764C30, void, ChangeState, (app::DiscoverAreasEntity * this_ptr, app::DiscoverAreasEntity_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00765210, void, OnUpdateEntity, (app::DiscoverAreasEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x007659F0, void, OnStartPlayback, (app::DiscoverAreasEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00765B80, void, SetCursorPosition, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00765C40, bool, HasFinished, (app::DiscoverAreasEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00765D00, void, ctor, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00765DF0, void, _ChangeState_b__22_0, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A198, DiscoverAreasEntity__ChangeState_b__22_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00765EB0, void, _OnStartPlayback_b__24_0, (app::DiscoverAreasEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FD40, DiscoverAreasEntity__OnStartPlayback_b__24_0__MethodInfo)
} // namespace app::classes::Moon::Timeline::DiscoverAreasEntity
