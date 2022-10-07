#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Snapshot__Array {
        namespace {
            app::ReplayValidator_Snapshot__Array__Class* type_info_ref = nullptr;
        }
        app::ReplayValidator_Snapshot__Array__Class** type_info = &type_info_ref;
        inline app::ReplayValidator_Snapshot__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidator_Snapshot__Array__Class>(type_info, "Moon.Race", "ReplayValidator+Snapshot[]");
        }
        inline app::ReplayValidator_Snapshot__Array* create() {
            return il2cpp::create_object<app::ReplayValidator_Snapshot__Array>(get_class());
        }
    } // namespace ReplayValidator_Snapshot__Array
} // namespace app::classes::types