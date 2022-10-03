#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartAccelerationInputType__Enum {
        namespace {
            app::CartAccelerationInputType__Enum__Class* type_info_ref = nullptr;
        }
        app::CartAccelerationInputType__Enum__Class** type_info = &type_info_ref;
        inline app::CartAccelerationInputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CartAccelerationInputType__Enum__Class>(type_info, "", "CartAccelerationInputType");
        }
        inline app::CartAccelerationInputType__Enum* create() {
            return il2cpp::create_object<app::CartAccelerationInputType__Enum>(get_class());
        }
    } // namespace CartAccelerationInputType__Enum
} // namespace app::classes::types
