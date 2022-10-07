#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleIdleBehaviour {
        namespace {
            app::TentacleIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::TentacleIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleIdleBehaviour__Class>(type_info, "Moon", "TentacleIdleBehaviour");
        }
        inline app::TentacleIdleBehaviour* create() {
            return il2cpp::create_object<app::TentacleIdleBehaviour>(get_class());
        }
    } // namespace TentacleIdleBehaviour
} // namespace app::classes::types