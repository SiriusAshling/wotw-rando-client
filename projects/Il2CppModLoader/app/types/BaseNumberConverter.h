#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseNumberConverter {
        namespace {
            app::BaseNumberConverter__Class* type_info_ref = nullptr;
        }
        app::BaseNumberConverter__Class** type_info = &type_info_ref;
        inline app::BaseNumberConverter__Class* get_class() {
            return il2cpp::get_class<app::BaseNumberConverter__Class>(type_info, "System.ComponentModel", "BaseNumberConverter");
        }
        inline app::BaseNumberConverter* create() {
            return il2cpp::create_object<app::BaseNumberConverter>(get_class());
        }
    } // namespace BaseNumberConverter
} // namespace app::classes::types