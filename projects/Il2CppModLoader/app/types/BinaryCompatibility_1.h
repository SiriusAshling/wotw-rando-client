#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryCompatibility_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryCompatibility_1__Class** type_info;
        inline app::BinaryCompatibility_1__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility_1__Class>(type_info, "System.Xml", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility_1* create() {
            return il2cpp::create_object<app::BinaryCompatibility_1>(get_class());
        }
    } // namespace BinaryCompatibility_1
} // namespace app::classes::types