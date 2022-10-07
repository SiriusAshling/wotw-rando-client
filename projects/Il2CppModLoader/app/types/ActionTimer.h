#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionTimer {
        namespace {
            app::ActionTimer__Class* type_info_ref = nullptr;
        }
        app::ActionTimer__Class** type_info = &type_info_ref;
        inline app::ActionTimer__Class* get_class() {
            return il2cpp::get_class<app::ActionTimer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ActionTimer");
        }
        inline app::ActionTimer* create() {
            return il2cpp::create_object<app::ActionTimer>(get_class());
        }
    } // namespace ActionTimer
} // namespace app::classes::types