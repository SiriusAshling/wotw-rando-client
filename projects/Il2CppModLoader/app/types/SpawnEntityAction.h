#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnEntityAction {
        namespace {
            app::SpawnEntityAction__Class* type_info_ref = nullptr;
        }
        app::SpawnEntityAction__Class** type_info = &type_info_ref;
        inline app::SpawnEntityAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnEntityAction__Class>(type_info, "", "SpawnEntityAction");
        }
        inline app::SpawnEntityAction* create() {
            return il2cpp::create_object<app::SpawnEntityAction>(get_class());
        }
    } // namespace SpawnEntityAction
} // namespace app::classes::types