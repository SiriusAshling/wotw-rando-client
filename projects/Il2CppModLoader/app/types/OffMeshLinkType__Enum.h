#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffMeshLinkType__Enum {
        namespace {
            app::OffMeshLinkType__Enum__Class* type_info_ref = nullptr;
        }
        app::OffMeshLinkType__Enum__Class** type_info = &type_info_ref;
        inline app::OffMeshLinkType__Enum__Class* get_class() {
            return il2cpp::get_class<app::OffMeshLinkType__Enum__Class>(type_info, "UnityEngine.AI", "OffMeshLinkType");
        }
        inline app::OffMeshLinkType__Enum* create() {
            return il2cpp::create_object<app::OffMeshLinkType__Enum>(get_class());
        }
    } // namespace OffMeshLinkType__Enum
} // namespace app::classes::types
