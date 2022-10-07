#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishEnemySounds {
        namespace {
            app::FishEnemySounds__Class* type_info_ref = nullptr;
        }
        app::FishEnemySounds__Class** type_info = &type_info_ref;
        inline app::FishEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::FishEnemySounds__Class>(type_info, "", "FishEnemySounds");
        }
        inline app::FishEnemySounds* create() {
            return il2cpp::create_object<app::FishEnemySounds>(get_class());
        }
    } // namespace FishEnemySounds
} // namespace app::classes::types