#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XboxOneStatistics {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestStatistics, (app::Action_1_System_Collections_Generic_List_1__1 * callback, app::Action * failure))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneStatistics * this_ptr))
}