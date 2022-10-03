#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_AutomaticGroup__Array {
        namespace {
            app::UberWaterReflectionView_AutomaticGroup__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionView_AutomaticGroup__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_AutomaticGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView_AutomaticGroup__Array__Class>(type_info, "", "UberWaterReflectionView+AutomaticGroup[]");
        }
        inline app::UberWaterReflectionView_AutomaticGroup__Array* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_AutomaticGroup__Array>(get_class());
        }
    } // namespace UberWaterReflectionView_AutomaticGroup__Array
} // namespace app::classes::types
