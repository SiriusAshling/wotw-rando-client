#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ku {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ku__Class** type_info;
        inline app::Ku__Class* get_class() {
            return il2cpp::get_class<app::Ku__Class>(type_info, "", "Ku");
        }
        inline app::Ku* create() {
            return il2cpp::create_object<app::Ku>(get_class());
        }
    } // namespace Ku
} // namespace app::classes::types