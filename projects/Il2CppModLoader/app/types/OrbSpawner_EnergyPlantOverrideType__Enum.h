#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawner_EnergyPlantOverrideType__Enum {
        namespace {
            app::OrbSpawner_EnergyPlantOverrideType__Enum__Class* type_info_ref = nullptr;
        }
        app::OrbSpawner_EnergyPlantOverrideType__Enum__Class** type_info = &type_info_ref;
        inline app::OrbSpawner_EnergyPlantOverrideType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawner_EnergyPlantOverrideType__Enum__Class>(type_info, "", "OrbSpawner", "EnergyPlantOverrideType");
        }
        inline app::OrbSpawner_EnergyPlantOverrideType__Enum* create() {
            return il2cpp::create_object<app::OrbSpawner_EnergyPlantOverrideType__Enum>(get_class());
        }
    } // namespace OrbSpawner_EnergyPlantOverrideType__Enum
} // namespace app::classes::types