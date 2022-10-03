#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageRecieverSettings {
        namespace {
            app::DamageRecieverSettings__Class* type_info_ref = nullptr;
        }
        app::DamageRecieverSettings__Class** type_info = &type_info_ref;
        inline app::DamageRecieverSettings__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverSettings__Class>(type_info, "", "DamageRecieverSettings");
        }
        inline app::DamageRecieverSettings* create() {
            return il2cpp::create_object<app::DamageRecieverSettings>(get_class());
        }
    } // namespace DamageRecieverSettings
} // namespace app::classes::types
