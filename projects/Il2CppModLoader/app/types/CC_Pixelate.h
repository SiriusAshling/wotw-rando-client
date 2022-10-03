#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_Pixelate {
        namespace {
            app::CC_Pixelate__Class* type_info_ref = nullptr;
        }
        app::CC_Pixelate__Class** type_info = &type_info_ref;
        inline app::CC_Pixelate__Class* get_class() {
            return il2cpp::get_class<app::CC_Pixelate__Class>(type_info, "", "CC_Pixelate");
        }
        inline app::CC_Pixelate* create() {
            return il2cpp::create_object<app::CC_Pixelate>(get_class());
        }
    } // namespace CC_Pixelate
} // namespace app::classes::types
