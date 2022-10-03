#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CheckpointPlugin {
        namespace {
            app::CheckpointPlugin__Class* type_info_ref = nullptr;
        }
        app::CheckpointPlugin__Class** type_info = &type_info_ref;
        inline app::CheckpointPlugin__Class* get_class() {
            return il2cpp::get_class<app::CheckpointPlugin__Class>(type_info, "", "CheckpointPlugin");
        }
        inline app::CheckpointPlugin* create() {
            return il2cpp::create_object<app::CheckpointPlugin>(get_class());
        }
    } // namespace CheckpointPlugin
} // namespace app::classes::types
