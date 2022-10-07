#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommonCommSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCommonCommSettings__Class** type_info;
        inline app::AkCommonCommSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonCommSettings__Class>(type_info, "", "AkCommonCommSettings");
        }
        inline app::AkCommonCommSettings* create() {
            return il2cpp::create_object<app::AkCommonCommSettings>(get_class());
        }
    } // namespace AkCommonCommSettings
} // namespace app::classes::types