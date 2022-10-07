#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerIdle {
        namespace {
            app::MinerIdle__Class* type_info_ref = nullptr;
        }
        app::MinerIdle__Class** type_info = &type_info_ref;
        inline app::MinerIdle__Class* get_class() {
            return il2cpp::get_class<app::MinerIdle__Class>(type_info, "", "MinerIdle");
        }
        inline app::MinerIdle* create() {
            return il2cpp::create_object<app::MinerIdle>(get_class());
        }
    } // namespace MinerIdle
} // namespace app::classes::types