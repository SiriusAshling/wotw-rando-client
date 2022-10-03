#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSoftInteraction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalSoftInteraction__Class** type_info;
        inline app::PhysicalSoftInteraction__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSoftInteraction__Class>(type_info, "", "PhysicalSoftInteraction");
        }
        inline app::PhysicalSoftInteraction* create() {
            return il2cpp::create_object<app::PhysicalSoftInteraction>(get_class());
        }
    } // namespace PhysicalSoftInteraction
} // namespace app::classes::types
