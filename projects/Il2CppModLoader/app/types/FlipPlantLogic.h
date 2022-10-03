#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlipPlantLogic {
        namespace {
            app::FlipPlantLogic__Class* type_info_ref = nullptr;
        }
        app::FlipPlantLogic__Class** type_info = &type_info_ref;
        inline app::FlipPlantLogic__Class* get_class() {
            return il2cpp::get_class<app::FlipPlantLogic__Class>(type_info, "", "FlipPlantLogic");
        }
        inline app::FlipPlantLogic* create() {
            return il2cpp::create_object<app::FlipPlantLogic>(get_class());
        }
        inline app::FlipPlantLogic__Array* create_array(int size) {
            return il2cpp::array_new<app::FlipPlantLogic__Array>(get_class(), size);
        }
    } // namespace FlipPlantLogic
} // namespace app::classes::types
