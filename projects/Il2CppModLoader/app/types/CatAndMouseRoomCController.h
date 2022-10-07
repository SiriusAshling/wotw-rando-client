#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomCController {
        namespace {
            app::CatAndMouseRoomCController__Class* type_info_ref = nullptr;
        }
        app::CatAndMouseRoomCController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomCController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomCController__Class>(type_info, "", "CatAndMouseRoomCController");
        }
        inline app::CatAndMouseRoomCController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomCController>(get_class());
        }
    } // namespace CatAndMouseRoomCController
} // namespace app::classes::types