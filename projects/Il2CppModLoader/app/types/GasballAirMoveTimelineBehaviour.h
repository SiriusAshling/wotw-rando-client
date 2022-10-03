#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballAirMoveTimelineBehaviour {
        namespace {
            app::GasballAirMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::GasballAirMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::GasballAirMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballAirMoveTimelineBehaviour__Class>(type_info, "", "GasballAirMoveTimelineBehaviour");
        }
        inline app::GasballAirMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::GasballAirMoveTimelineBehaviour>(get_class());
        }
    } // namespace GasballAirMoveTimelineBehaviour
} // namespace app::classes::types
