#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineDeathBehaviour {
        namespace {
            app::TimelineDeathBehaviour__Class* type_info_ref = nullptr;
        }
        app::TimelineDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::TimelineDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TimelineDeathBehaviour__Class>(type_info, "", "TimelineDeathBehaviour");
        }
        inline app::TimelineDeathBehaviour* create() {
            return il2cpp::create_object<app::TimelineDeathBehaviour>(get_class());
        }
    } // namespace TimelineDeathBehaviour
} // namespace app::classes::types