#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActiveCharacterCondition {
        namespace {
            app::ActiveCharacterCondition__Class* type_info_ref = nullptr;
        }
        app::ActiveCharacterCondition__Class** type_info = &type_info_ref;
        inline app::ActiveCharacterCondition__Class* get_class() {
            return il2cpp::get_class<app::ActiveCharacterCondition__Class>(type_info, "", "ActiveCharacterCondition");
        }
        inline app::ActiveCharacterCondition* create() {
            return il2cpp::create_object<app::ActiveCharacterCondition>(get_class());
        }
    } // namespace ActiveCharacterCondition
} // namespace app::classes::types