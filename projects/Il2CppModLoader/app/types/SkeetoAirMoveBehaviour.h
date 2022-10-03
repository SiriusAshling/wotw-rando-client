#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirMoveBehaviour {
        namespace {
            app::SkeetoAirMoveBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoAirMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoAirMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirMoveBehaviour__Class>(type_info, "", "SkeetoAirMoveBehaviour");
        }
        inline app::SkeetoAirMoveBehaviour* create() {
            return il2cpp::create_object<app::SkeetoAirMoveBehaviour>(get_class());
        }
    } // namespace SkeetoAirMoveBehaviour
} // namespace app::classes::types
