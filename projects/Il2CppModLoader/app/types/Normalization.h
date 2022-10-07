#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Normalization {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Normalization__Class** type_info;
        inline app::Normalization__Class* get_class() {
            return il2cpp::get_class<app::Normalization__Class>(type_info, "System.Text", "Normalization");
        }
        inline app::Normalization* create() {
            return il2cpp::create_object<app::Normalization>(get_class());
        }
    } // namespace Normalization
} // namespace app::classes::types