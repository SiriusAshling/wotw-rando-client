#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction {
        namespace {
            app::SeinInteraction__Class* type_info_ref = nullptr;
        }
        app::SeinInteraction__Class** type_info = &type_info_ref;
        inline app::SeinInteraction__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction__Class>(type_info, "", "SeinInteraction");
        }
        inline app::SeinInteraction* create() {
            return il2cpp::create_object<app::SeinInteraction>(get_class());
        }
    } // namespace SeinInteraction
} // namespace app::classes::types