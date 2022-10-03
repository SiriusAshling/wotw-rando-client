#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_nonPositiveInteger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_nonPositiveInteger__Class** type_info;
        inline app::Datatype_nonPositiveInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_nonPositiveInteger__Class>(type_info, "System.Xml.Schema", "Datatype_nonPositiveInteger");
        }
        inline app::Datatype_nonPositiveInteger* create() {
            return il2cpp::create_object<app::Datatype_nonPositiveInteger>(get_class());
        }
    } // namespace Datatype_nonPositiveInteger
} // namespace app::classes::types
