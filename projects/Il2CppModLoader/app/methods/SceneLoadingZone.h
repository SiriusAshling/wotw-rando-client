#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SceneLoadingZone {
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, (app::SceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::SceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA99D0, void, ctor, (app::SceneLoadingZone * this_ptr))
} // namespace app::classes::SceneLoadingZone
