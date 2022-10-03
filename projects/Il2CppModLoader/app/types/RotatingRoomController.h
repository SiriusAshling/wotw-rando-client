#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingRoomController {
        namespace {
            app::RotatingRoomController__Class* type_info_ref = nullptr;
        }
        app::RotatingRoomController__Class** type_info = &type_info_ref;
        inline app::RotatingRoomController__Class* get_class() {
            return il2cpp::get_class<app::RotatingRoomController__Class>(type_info, "", "RotatingRoomController");
        }
        inline app::RotatingRoomController* create() {
            return il2cpp::create_object<app::RotatingRoomController>(get_class());
        }
    } // namespace RotatingRoomController
} // namespace app::classes::types
