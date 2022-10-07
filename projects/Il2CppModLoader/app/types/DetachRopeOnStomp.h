#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DetachRopeOnStomp {
        namespace {
            app::DetachRopeOnStomp__Class* type_info_ref = nullptr;
        }
        app::DetachRopeOnStomp__Class** type_info = &type_info_ref;
        inline app::DetachRopeOnStomp__Class* get_class() {
            return il2cpp::get_class<app::DetachRopeOnStomp__Class>(type_info, "", "DetachRopeOnStomp");
        }
        inline app::DetachRopeOnStomp* create() {
            return il2cpp::create_object<app::DetachRopeOnStomp>(get_class());
        }
    } // namespace DetachRopeOnStomp
} // namespace app::classes::types