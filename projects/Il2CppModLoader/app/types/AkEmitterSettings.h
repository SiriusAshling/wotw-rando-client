#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkEmitterSettings {
        namespace {
            app::AkEmitterSettings__Class* type_info_ref = nullptr;
        }
        app::AkEmitterSettings__Class** type_info = &type_info_ref;
        inline app::AkEmitterSettings__Class* get_class() {
            return il2cpp::get_class<app::AkEmitterSettings__Class>(type_info, "", "AkEmitterSettings");
        }
        inline app::AkEmitterSettings* create() {
            return il2cpp::create_object<app::AkEmitterSettings>(get_class());
        }
    } // namespace AkEmitterSettings
} // namespace app::classes::types
