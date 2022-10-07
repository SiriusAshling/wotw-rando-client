#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Beautify {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Beautify__Class** type_info;
        inline app::Beautify__Class* get_class() {
            return il2cpp::get_class<app::Beautify__Class>(type_info, "BeautifyEffect", "Beautify");
        }
        inline app::Beautify* create() {
            return il2cpp::create_object<app::Beautify>(get_class());
        }
    } // namespace Beautify
} // namespace app::classes::types