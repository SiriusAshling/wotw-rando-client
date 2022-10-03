#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroHideZoneAction {
        namespace {
            app::MistyWoodsKuroHideZoneAction__Class* type_info_ref = nullptr;
        }
        app::MistyWoodsKuroHideZoneAction__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroHideZoneAction__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroHideZoneAction__Class>(type_info, "", "MistyWoodsKuroHideZoneAction");
        }
        inline app::MistyWoodsKuroHideZoneAction* create() {
            return il2cpp::create_object<app::MistyWoodsKuroHideZoneAction>(get_class());
        }
    } // namespace MistyWoodsKuroHideZoneAction
} // namespace app::classes::types
