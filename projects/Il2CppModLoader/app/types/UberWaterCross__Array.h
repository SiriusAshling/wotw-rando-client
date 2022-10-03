#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterCross__Array {
        namespace {
            app::UberWaterCross__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterCross__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterCross__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterCross__Array__Class>(type_info, "", "UberWaterCross[]");
        }
        inline app::UberWaterCross__Array* create() {
            return il2cpp::create_object<app::UberWaterCross__Array>(get_class());
        }
    } // namespace UberWaterCross__Array
} // namespace app::classes::types
