#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataProvider__Class** type_info;
        inline app::DataProvider__Class* get_class() {
            return il2cpp::get_class<app::DataProvider__Class>(type_info, "SystemIntegration.Synchronizer", "DataProvider");
        }
        inline app::DataProvider* create() {
            return il2cpp::create_object<app::DataProvider>(get_class());
        }
    } // namespace DataProvider
} // namespace app::classes::types