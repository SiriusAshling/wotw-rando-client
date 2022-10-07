#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_uuid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_uuid__Class** type_info;
        inline app::Datatype_uuid__Class* get_class() {
            return il2cpp::get_class<app::Datatype_uuid__Class>(type_info, "System.Xml.Schema", "Datatype_uuid");
        }
        inline app::Datatype_uuid* create() {
            return il2cpp::create_object<app::Datatype_uuid>(get_class());
        }
    } // namespace Datatype_uuid
} // namespace app::classes::types