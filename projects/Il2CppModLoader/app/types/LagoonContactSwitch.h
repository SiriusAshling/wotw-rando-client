#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LagoonContactSwitch {
        namespace {
            app::LagoonContactSwitch__Class* type_info_ref = nullptr;
        }
        app::LagoonContactSwitch__Class** type_info = &type_info_ref;
        inline app::LagoonContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitch__Class>(type_info, "", "LagoonContactSwitch");
        }
        inline app::LagoonContactSwitch* create() {
            return il2cpp::create_object<app::LagoonContactSwitch>(get_class());
        }
        inline app::LagoonContactSwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::LagoonContactSwitch__Array>(get_class(), size);
        }
        inline app::LagoonContactSwitch__Array* create_array(const std::vector<app::LagoonContactSwitch*>& items) {
            return il2cpp::array_new<app::LagoonContactSwitch__Array>(get_class(), items);
        }
    } // namespace LagoonContactSwitch
} // namespace app::classes::types