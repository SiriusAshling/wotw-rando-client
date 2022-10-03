#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NickDeathReaction {
        namespace {
            app::NickDeathReaction__Class* type_info_ref = nullptr;
        }
        app::NickDeathReaction__Class** type_info = &type_info_ref;
        inline app::NickDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::NickDeathReaction__Class>(type_info, "", "NickDeathReaction");
        }
        inline app::NickDeathReaction* create() {
            return il2cpp::create_object<app::NickDeathReaction>(get_class());
        }
    } // namespace NickDeathReaction
} // namespace app::classes::types
