#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryObject__Class** type_info;
        inline app::BinaryObject__Class* get_class() {
            return il2cpp::get_class<app::BinaryObject__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObject");
        }
        inline app::BinaryObject* create() {
            return il2cpp::create_object<app::BinaryObject>(get_class());
        }
    } // namespace BinaryObject
} // namespace app::classes::types