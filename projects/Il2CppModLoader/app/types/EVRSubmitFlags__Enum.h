#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRSubmitFlags__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRSubmitFlags__Enum__Class** type_info;
        inline app::EVRSubmitFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRSubmitFlags__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRSubmitFlags");
        }
        inline app::EVRSubmitFlags__Enum* create() {
            return il2cpp::create_object<app::EVRSubmitFlags__Enum>(get_class());
        }
    } // namespace EVRSubmitFlags__Enum
} // namespace app::classes::types
