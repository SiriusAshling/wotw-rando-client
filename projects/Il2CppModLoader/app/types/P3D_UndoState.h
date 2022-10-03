#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_UndoState {
        namespace {
            app::P3D_UndoState__Class* type_info_ref = nullptr;
        }
        app::P3D_UndoState__Class** type_info = &type_info_ref;
        inline app::P3D_UndoState__Class* get_class() {
            return il2cpp::get_class<app::P3D_UndoState__Class>(type_info, "", "P3D_UndoState");
        }
        inline app::P3D_UndoState* create() {
            return il2cpp::create_object<app::P3D_UndoState>(get_class());
        }
    } // namespace P3D_UndoState
} // namespace app::classes::types
