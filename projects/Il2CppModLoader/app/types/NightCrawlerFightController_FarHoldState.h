#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FarHoldState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_FarHoldState__Class** type_info;
        inline app::NightCrawlerFightController_FarHoldState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FarHoldState__Class>(type_info, "", "NightCrawlerFightController", "FarHoldState");
        }
        inline app::NightCrawlerFightController_FarHoldState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FarHoldState>(get_class());
        }
    } // namespace NightCrawlerFightController_FarHoldState
} // namespace app::classes::types
