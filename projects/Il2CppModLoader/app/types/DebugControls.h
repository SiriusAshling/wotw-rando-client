#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugControls {
        namespace {
            app::DebugControls__Class* type_info_ref = nullptr;
        }
        app::DebugControls__Class** type_info = &type_info_ref;
        inline app::DebugControls__Class* get_class() {
            return il2cpp::get_class<app::DebugControls__Class>(type_info, "", "DebugControls");
        }
        inline app::DebugControls* create() {
            return il2cpp::create_object<app::DebugControls>(get_class());
        }
    } // namespace DebugControls
} // namespace app::classes::types
