#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_UberAtlasExclusions_SceneExclusion_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::UberAtlasExclusions_SceneExclusion obj))
    IL2CPP_REGISTER_METHOD(0x02A53380, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::UberAtlasExclusions_SceneExclusion obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::IAsyncResult * result))
}