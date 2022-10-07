#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction {
        namespace {
            app::CrabDeathReaction__Class* type_info_ref = nullptr;
        }
        app::CrabDeathReaction__Class** type_info = &type_info_ref;
        inline app::CrabDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::CrabDeathReaction__Class>(type_info, "", "CrabDeathReaction");
        }
        inline app::CrabDeathReaction* create() {
            return il2cpp::create_object<app::CrabDeathReaction>(get_class());
        }
    } // namespace CrabDeathReaction
} // namespace app::classes::types