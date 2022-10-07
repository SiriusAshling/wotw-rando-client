#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DigZoneHandler {
        namespace {
            app::DigZoneHandler__Class* type_info_ref = nullptr;
        }
        app::DigZoneHandler__Class** type_info = &type_info_ref;
        inline app::DigZoneHandler__Class* get_class() {
            return il2cpp::get_class<app::DigZoneHandler__Class>(type_info, "Moon", "DigZoneHandler");
        }
        inline app::DigZoneHandler* create() {
            return il2cpp::create_object<app::DigZoneHandler>(get_class());
        }
    } // namespace DigZoneHandler
} // namespace app::classes::types