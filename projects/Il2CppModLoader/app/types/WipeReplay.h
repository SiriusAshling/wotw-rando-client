#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WipeReplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WipeReplay__Class** type_info;
        inline app::WipeReplay__Class* get_class() {
            return il2cpp::get_class<app::WipeReplay__Class>(type_info, "", "WipeReplay");
        }
        inline app::WipeReplay* create() {
            return il2cpp::create_object<app::WipeReplay>(get_class());
        }
    } // namespace WipeReplay
} // namespace app::classes::types