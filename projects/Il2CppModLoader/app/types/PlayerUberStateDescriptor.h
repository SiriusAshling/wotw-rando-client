#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateDescriptor__Class** type_info;
        inline app::PlayerUberStateDescriptor__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateDescriptor__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateDescriptor");
        }
        inline app::PlayerUberStateDescriptor* create() {
            return il2cpp::create_object<app::PlayerUberStateDescriptor>(get_class());
        }
    } // namespace PlayerUberStateDescriptor
} // namespace app::classes::types