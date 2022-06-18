#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InteractionGraph::MessageNode {
    IL2CPP_REGISTER_METHOD(0x019908C0, app::IMessageProvider *, get_MessageProvider, (app::MessageNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990960, void, UpdateState, (app::MessageNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990A20, void, OnEnter, (app::MessageNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990BD0, void, OnExit, (app::MessageNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990C80, void, ctor, (app::MessageNode * this_ptr))
}