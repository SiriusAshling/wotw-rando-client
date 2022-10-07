#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoMoveToSemiRandomPositionBehaviour {
        namespace {
            app::SkeetoMoveToSemiRandomPositionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoMoveToSemiRandomPositionBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoMoveToSemiRandomPositionBehaviour__Class>(type_info, "", "SkeetoMoveToSemiRandomPositionBehaviour");
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoMoveToSemiRandomPositionBehaviour>(get_class());
        }
    } // namespace SkeetoMoveToSemiRandomPositionBehaviour
} // namespace app::classes::types