#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuyMapUIConfirmationOverlay_c__Class** type_info;
        inline app::BuyMapUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuyMapUIConfirmationOverlay_c__Class>(type_info, "", "BuyMapUIConfirmationOverlay", "<>c");
        }
        inline app::BuyMapUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay_c>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay_c
} // namespace app::classes::types