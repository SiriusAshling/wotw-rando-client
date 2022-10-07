#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmTargetingBehaviour {
        namespace {
            app::SwarmTargetingBehaviour__Class* type_info_ref = nullptr;
        }
        app::SwarmTargetingBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmTargetingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmTargetingBehaviour__Class>(type_info, "", "SwarmTargetingBehaviour");
        }
        inline app::SwarmTargetingBehaviour* create() {
            return il2cpp::create_object<app::SwarmTargetingBehaviour>(get_class());
        }
    } // namespace SwarmTargetingBehaviour
} // namespace app::classes::types