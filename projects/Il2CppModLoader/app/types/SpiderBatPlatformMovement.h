#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatPlatformMovement {
        namespace {
            app::SpiderBatPlatformMovement__Class* type_info_ref = nullptr;
        }
        app::SpiderBatPlatformMovement__Class** type_info = &type_info_ref;
        inline app::SpiderBatPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatPlatformMovement__Class>(type_info, "", "SpiderBatPlatformMovement");
        }
        inline app::SpiderBatPlatformMovement* create() {
            return il2cpp::create_object<app::SpiderBatPlatformMovement>(get_class());
        }
    } // namespace SpiderBatPlatformMovement
} // namespace app::classes::types