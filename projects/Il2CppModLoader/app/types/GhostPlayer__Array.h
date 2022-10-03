#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostPlayer__Array {
        namespace {
            app::GhostPlayer__Array__Class* type_info_ref = nullptr;
        }
        app::GhostPlayer__Array__Class** type_info = &type_info_ref;
        inline app::GhostPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostPlayer__Array__Class>(type_info, "", "GhostPlayer[]");
        }
        inline app::GhostPlayer__Array* create() {
            return il2cpp::create_object<app::GhostPlayer__Array>(get_class());
        }
    } // namespace GhostPlayer__Array
} // namespace app::classes::types
