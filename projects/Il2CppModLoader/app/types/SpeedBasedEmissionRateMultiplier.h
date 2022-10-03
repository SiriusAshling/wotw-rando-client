#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpeedBasedEmissionRateMultiplier {
        namespace {
            app::SpeedBasedEmissionRateMultiplier__Class* type_info_ref = nullptr;
        }
        app::SpeedBasedEmissionRateMultiplier__Class** type_info = &type_info_ref;
        inline app::SpeedBasedEmissionRateMultiplier__Class* get_class() {
            return il2cpp::get_class<app::SpeedBasedEmissionRateMultiplier__Class>(type_info, "", "SpeedBasedEmissionRateMultiplier");
        }
        inline app::SpeedBasedEmissionRateMultiplier* create() {
            return il2cpp::create_object<app::SpeedBasedEmissionRateMultiplier>(get_class());
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array* create_array(int size) {
            return il2cpp::array_new<app::SpeedBasedEmissionRateMultiplier__Array>(get_class(), size);
        }
    } // namespace SpeedBasedEmissionRateMultiplier
} // namespace app::classes::types
