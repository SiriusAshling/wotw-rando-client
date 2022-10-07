#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction {
        namespace {
            app::SkeetoDeathReaction__Class* type_info_ref = nullptr;
        }
        app::SkeetoDeathReaction__Class** type_info = &type_info_ref;
        inline app::SkeetoDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoDeathReaction__Class>(type_info, "", "SkeetoDeathReaction");
        }
        inline app::SkeetoDeathReaction* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction>(get_class());
        }
    } // namespace SkeetoDeathReaction
} // namespace app::classes::types