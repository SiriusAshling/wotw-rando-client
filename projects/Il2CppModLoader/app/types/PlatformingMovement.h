#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformingMovement {
        namespace {
            app::PlatformingMovement__Class* type_info_ref = nullptr;
        }
        app::PlatformingMovement__Class** type_info = &type_info_ref;
        inline app::PlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformingMovement__Class>(type_info, "", "PlatformingMovement");
        }
        inline app::PlatformingMovement* create() {
            return il2cpp::create_object<app::PlatformingMovement>(get_class());
        }
    } // namespace PlatformingMovement
} // namespace app::classes::types
