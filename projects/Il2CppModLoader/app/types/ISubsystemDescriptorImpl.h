#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptorImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISubsystemDescriptorImpl__Class** type_info;
        inline app::ISubsystemDescriptorImpl__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptorImpl__Class>(type_info, "UnityEngine.Experimental", "ISubsystemDescriptorImpl");
        }
        inline app::ISubsystemDescriptorImpl__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystemDescriptorImpl__Array>(get_class(), size);
        }
        inline app::ISubsystemDescriptorImpl__Array* create_array(const std::vector<app::ISubsystemDescriptorImpl*>& items) {
            return il2cpp::array_new<app::ISubsystemDescriptorImpl__Array>(get_class(), items);
        }
    } // namespace ISubsystemDescriptorImpl
} // namespace app::classes::types