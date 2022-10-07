#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptor__Array {
        namespace {
            app::ISubsystemDescriptor__Array__Class* type_info_ref = nullptr;
        }
        app::ISubsystemDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::ISubsystemDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptor__Array__Class>(type_info, "UnityEngine.Experimental", "ISubsystemDescriptor[]");
        }
        inline app::ISubsystemDescriptor__Array* create() {
            return il2cpp::create_object<app::ISubsystemDescriptor__Array>(get_class());
        }
    } // namespace ISubsystemDescriptor__Array
} // namespace app::classes::types