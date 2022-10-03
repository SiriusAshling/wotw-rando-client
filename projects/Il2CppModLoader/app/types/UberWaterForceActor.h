#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterForceActor {
        namespace {
            app::UberWaterForceActor__Class* type_info_ref = nullptr;
        }
        app::UberWaterForceActor__Class** type_info = &type_info_ref;
        inline app::UberWaterForceActor__Class* get_class() {
            return il2cpp::get_class<app::UberWaterForceActor__Class>(type_info, "", "UberWaterForceActor");
        }
        inline app::UberWaterForceActor* create() {
            return il2cpp::create_object<app::UberWaterForceActor>(get_class());
        }
    } // namespace UberWaterForceActor
} // namespace app::classes::types
