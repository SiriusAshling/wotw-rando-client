#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class** type_info;
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin", "WorldRecordableEventsData");
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData>(get_class());
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array>(get_class(), size);
        }
    } // namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData
} // namespace app::classes::types
