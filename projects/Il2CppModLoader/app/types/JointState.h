#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JointState__Class** type_info;
        inline app::JointState__Class* get_class() {
            return il2cpp::get_class<app::JointState__Class>(type_info, "", "JointState");
        }
        inline app::JointState* create() {
            return il2cpp::create_object<app::JointState>(get_class());
        }
        inline app::JointState__Array* create_array(int size) {
            return il2cpp::array_new<app::JointState__Array>(get_class(), size);
        }
        inline app::JointState__Array* create_array(const std::vector<app::JointState*>& items) {
            return il2cpp::array_new<app::JointState__Array>(get_class(), items);
        }
    } // namespace JointState
} // namespace app::classes::types