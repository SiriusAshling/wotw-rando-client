#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveOri {
        namespace {
            app::MoveOri__Class* type_info_ref = nullptr;
        }
        app::MoveOri__Class** type_info = &type_info_ref;
        inline app::MoveOri__Class* get_class() {
            return il2cpp::get_class<app::MoveOri__Class>(type_info, "Moon", "MoveOri");
        }
        inline app::MoveOri* create() {
            return il2cpp::create_object<app::MoveOri>(get_class());
        }
    } // namespace MoveOri
} // namespace app::classes::types
