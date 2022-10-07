#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HorizontalKickbackTimelineBehaviour {
        namespace {
            app::HorizontalKickbackTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::HorizontalKickbackTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::HorizontalKickbackTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HorizontalKickbackTimelineBehaviour__Class>(type_info, "", "HorizontalKickbackTimelineBehaviour");
        }
        inline app::HorizontalKickbackTimelineBehaviour* create() {
            return il2cpp::create_object<app::HorizontalKickbackTimelineBehaviour>(get_class());
        }
    } // namespace HorizontalKickbackTimelineBehaviour
} // namespace app::classes::types