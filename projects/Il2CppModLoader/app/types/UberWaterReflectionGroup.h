#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionGroup {
        namespace {
            app::UberWaterReflectionGroup__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionGroup__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionGroup__Class>(type_info, "", "UberWaterReflectionGroup");
        }
        inline app::UberWaterReflectionGroup* create() {
            return il2cpp::create_object<app::UberWaterReflectionGroup>(get_class());
        }
    } // namespace UberWaterReflectionGroup
} // namespace app::classes::types
