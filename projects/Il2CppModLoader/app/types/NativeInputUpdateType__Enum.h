#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeInputUpdateType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NativeInputUpdateType__Enum__Class** type_info;
        inline app::NativeInputUpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeInputUpdateType__Enum__Class>(type_info, "UnityEngineInternal.Input", "NativeInputUpdateType");
        }
        inline app::NativeInputUpdateType__Enum* create() {
            return il2cpp::create_object<app::NativeInputUpdateType__Enum>(get_class());
        }
    } // namespace NativeInputUpdateType__Enum
} // namespace app::classes::types