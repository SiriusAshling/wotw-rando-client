#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSplashEffect__Array {
        namespace {
            app::WaterSplashEffect__Array__Class* type_info_ref = nullptr;
        }
        app::WaterSplashEffect__Array__Class** type_info = &type_info_ref;
        inline app::WaterSplashEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashEffect__Array__Class>(type_info, "", "WaterSplashEffect[]");
        }
        inline app::WaterSplashEffect__Array* create() {
            return il2cpp::create_object<app::WaterSplashEffect__Array>(get_class());
        }
    } // namespace WaterSplashEffect__Array
} // namespace app::classes::types