#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X501_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X501_1__Class** type_info;
        inline app::X501_1__Class* get_class() {
            return il2cpp::get_class<app::X501_1__Class>(type_info, "Mono.Security.X509", "X501");
        }
        inline app::X501_1* create() {
            return il2cpp::create_object<app::X501_1>(get_class());
        }
    } // namespace X501_1
} // namespace app::classes::types
