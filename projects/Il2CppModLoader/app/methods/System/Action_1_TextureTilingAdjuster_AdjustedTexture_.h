#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_TextureTilingAdjuster_AdjustedTexture_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_TextureTilingAdjuster_AdjustedTexture_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FD8B0, void, Invoke, (app::Action_1_TextureTilingAdjuster_AdjustedTexture_ * this_ptr, app::TextureTilingAdjuster_AdjustedTexture obj))
    IL2CPP_REGISTER_METHOD(0x02C086F0, app::IAsyncResult*, BeginInvoke, (app::Action_1_TextureTilingAdjuster_AdjustedTexture_ * this_ptr, app::TextureTilingAdjuster_AdjustedTexture obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_TextureTilingAdjuster_AdjustedTexture_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_TextureTilingAdjuster_AdjustedTexture_
