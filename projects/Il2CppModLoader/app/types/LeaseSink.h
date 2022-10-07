#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaseSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaseSink__Class** type_info;
        inline app::LeaseSink__Class* get_class() {
            return il2cpp::get_class<app::LeaseSink__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LeaseSink");
        }
        inline app::LeaseSink* create() {
            return il2cpp::create_object<app::LeaseSink>(get_class());
        }
    } // namespace LeaseSink
} // namespace app::classes::types