#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightAttackData {
        namespace {
            app::LightAttackData__Class* type_info_ref = nullptr;
        }
        app::LightAttackData__Class** type_info = &type_info_ref;
        inline app::LightAttackData__Class* get_class() {
            return il2cpp::get_class<app::LightAttackData__Class>(type_info, "", "LightAttackData");
        }
        inline app::LightAttackData* create() {
            return il2cpp::create_object<app::LightAttackData>(get_class());
        }
        inline app::LightAttackData__Array* create_array(int size) {
            return il2cpp::array_new<app::LightAttackData__Array>(get_class(), size);
        }
        inline app::LightAttackData__Array* create_array(const std::vector<app::LightAttackData*>& items) {
            return il2cpp::array_new<app::LightAttackData__Array>(get_class(), items);
        }
    } // namespace LightAttackData
} // namespace app::classes::types