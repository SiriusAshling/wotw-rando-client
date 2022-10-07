#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivatedServiceTypeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivatedServiceTypeEntry__Class** type_info;
        inline app::ActivatedServiceTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::ActivatedServiceTypeEntry__Class>(type_info, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
        }
        inline app::ActivatedServiceTypeEntry* create() {
            return il2cpp::create_object<app::ActivatedServiceTypeEntry>(get_class());
        }
    } // namespace ActivatedServiceTypeEntry
} // namespace app::classes::types