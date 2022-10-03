#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallingRockSetup {
        namespace {
            app::FallingRockSetup__Class* type_info_ref = nullptr;
        }
        app::FallingRockSetup__Class** type_info = &type_info_ref;
        inline app::FallingRockSetup__Class* get_class() {
            return il2cpp::get_class<app::FallingRockSetup__Class>(type_info, "", "FallingRockSetup");
        }
        inline app::FallingRockSetup* create() {
            return il2cpp::create_object<app::FallingRockSetup>(get_class());
        }
    } // namespace FallingRockSetup
} // namespace app::classes::types
