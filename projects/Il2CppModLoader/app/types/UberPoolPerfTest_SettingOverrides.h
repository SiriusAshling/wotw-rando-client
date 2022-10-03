#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_SettingOverrides {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_SettingOverrides__Class** type_info;
        inline app::UberPoolPerfTest_SettingOverrides__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_SettingOverrides__Class>(type_info, "", "UberPoolPerfTest", "SettingOverrides");
        }
        inline app::UberPoolPerfTest_SettingOverrides* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_SettingOverrides>(get_class());
        }
    } // namespace UberPoolPerfTest_SettingOverrides
} // namespace app::classes::types
