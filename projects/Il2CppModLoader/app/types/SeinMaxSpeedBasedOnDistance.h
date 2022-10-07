#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMaxSpeedBasedOnDistance {
        namespace {
            app::SeinMaxSpeedBasedOnDistance__Class* type_info_ref = nullptr;
        }
        app::SeinMaxSpeedBasedOnDistance__Class** type_info = &type_info_ref;
        inline app::SeinMaxSpeedBasedOnDistance__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxSpeedBasedOnDistance__Class>(type_info, "", "SeinMaxSpeedBasedOnDistance");
        }
        inline app::SeinMaxSpeedBasedOnDistance* create() {
            return il2cpp::create_object<app::SeinMaxSpeedBasedOnDistance>(get_class());
        }
    } // namespace SeinMaxSpeedBasedOnDistance
} // namespace app::classes::types