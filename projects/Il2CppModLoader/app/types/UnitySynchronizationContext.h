#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnitySynchronizationContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnitySynchronizationContext__Class** type_info;
        inline app::UnitySynchronizationContext__Class* get_class() {
            return il2cpp::get_class<app::UnitySynchronizationContext__Class>(type_info, "UnityEngine", "UnitySynchronizationContext");
        }
        inline app::UnitySynchronizationContext* create() {
            return il2cpp::create_object<app::UnitySynchronizationContext>(get_class());
        }
    } // namespace UnitySynchronizationContext
} // namespace app::classes::types
