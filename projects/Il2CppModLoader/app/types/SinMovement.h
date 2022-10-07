#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SinMovement {
        namespace {
            app::SinMovement__Class* type_info_ref = nullptr;
        }
        app::SinMovement__Class** type_info = &type_info_ref;
        inline app::SinMovement__Class* get_class() {
            return il2cpp::get_class<app::SinMovement__Class>(type_info, "", "SinMovement");
        }
        inline app::SinMovement* create() {
            return il2cpp::create_object<app::SinMovement>(get_class());
        }
    } // namespace SinMovement
} // namespace app::classes::types