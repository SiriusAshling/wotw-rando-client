#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBIKChain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FBIKChain__Class** type_info;
        inline app::FBIKChain__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain__Class>(type_info, "RootMotion.FinalIK", "FBIKChain");
        }
        inline app::FBIKChain* create() {
            return il2cpp::create_object<app::FBIKChain>(get_class());
        }
        inline app::FBIKChain__Array* create_array(int size) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), size);
        }
        inline app::FBIKChain__Array* create_array(const std::vector<app::FBIKChain*>& items) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), items);
        }
    } // namespace FBIKChain
} // namespace app::classes::types