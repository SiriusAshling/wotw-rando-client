#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterlockedStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterlockedStack__Class** type_info;
        inline app::InterlockedStack__Class* get_class() {
            return il2cpp::get_class<app::InterlockedStack__Class>(type_info, "System.Net", "InterlockedStack");
        }
        inline app::InterlockedStack* create() {
            return il2cpp::create_object<app::InterlockedStack>(get_class());
        }
    } // namespace InterlockedStack
} // namespace app::classes::types
