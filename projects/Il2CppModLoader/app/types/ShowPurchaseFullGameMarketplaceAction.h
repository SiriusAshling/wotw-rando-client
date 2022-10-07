#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowPurchaseFullGameMarketplaceAction {
        namespace {
            app::ShowPurchaseFullGameMarketplaceAction__Class* type_info_ref = nullptr;
        }
        app::ShowPurchaseFullGameMarketplaceAction__Class** type_info = &type_info_ref;
        inline app::ShowPurchaseFullGameMarketplaceAction__Class* get_class() {
            return il2cpp::get_class<app::ShowPurchaseFullGameMarketplaceAction__Class>(type_info, "", "ShowPurchaseFullGameMarketplaceAction");
        }
        inline app::ShowPurchaseFullGameMarketplaceAction* create() {
            return il2cpp::create_object<app::ShowPurchaseFullGameMarketplaceAction>(get_class());
        }
    } // namespace ShowPurchaseFullGameMarketplaceAction
} // namespace app::classes::types