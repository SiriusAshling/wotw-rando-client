#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements {
        namespace {
            app::PauseMenuInventoryElements__Class* type_info_ref = nullptr;
        }
        app::PauseMenuInventoryElements__Class** type_info = &type_info_ref;
        inline app::PauseMenuInventoryElements__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuInventoryElements__Class>(type_info, "", "PauseMenuInventoryElements");
        }
        inline app::PauseMenuInventoryElements* create() {
            return il2cpp::create_object<app::PauseMenuInventoryElements>(get_class());
        }
    } // namespace PauseMenuInventoryElements
} // namespace app::classes::types