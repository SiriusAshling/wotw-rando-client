#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZDontSaveUtils {
    IL2CPP_REGISTER_METHOD(0x03119560, app::Transform *, get_DontSaveTransform, ())
    IL2CPP_REGISTER_METHOD(0x031197D0, app::GameObject *, InstantiateDontSavePrefab, (app::GameObject * prefab, app::String * game_object_name))
    IL2CPP_REGISTER_METHOD(0x03119910, bool, IsWithinDontSaveGroup_1, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x03119A00, bool, IsWithinDontSaveGroup_2, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x03119C00, void, MakeDontSave, (app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x03119D00, void, cctor, ())
}