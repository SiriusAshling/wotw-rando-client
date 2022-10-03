#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointDriveMode__Enum {
        namespace {
            app::JointDriveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::JointDriveMode__Enum__Class** type_info = &type_info_ref;
        inline app::JointDriveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::JointDriveMode__Enum__Class>(type_info, "UnityEngine", "JointDriveMode");
        }
        inline app::JointDriveMode__Enum* create() {
            return il2cpp::create_object<app::JointDriveMode__Enum>(get_class());
        }
    } // namespace JointDriveMode__Enum
} // namespace app::classes::types
