#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxArmor_HidePiecesTemp_d_12 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FoxArmor_HidePiecesTemp_d_12__Class** type_info;
        inline app::FoxArmor_HidePiecesTemp_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxArmor_HidePiecesTemp_d_12__Class>(type_info, "", "FoxArmor", "<HidePiecesTemp>d__12");
        }
        inline app::FoxArmor_HidePiecesTemp_d_12* create() {
            return il2cpp::create_object<app::FoxArmor_HidePiecesTemp_d_12>(get_class());
        }
    } // namespace FoxArmor_HidePiecesTemp_d_12
} // namespace app::classes::types
