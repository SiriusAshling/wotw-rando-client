#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightType__Enum {
        namespace {
            app::SpiritLightType__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiritLightType__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritLightType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightType__Enum__Class>(type_info, "", "SpiritLightType");
        }
        inline app::SpiritLightType__Enum* create() {
            return il2cpp::create_object<app::SpiritLightType__Enum>(get_class());
        }
    } // namespace SpiritLightType__Enum
} // namespace app::classes::types