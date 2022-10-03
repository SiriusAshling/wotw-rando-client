#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachInteractionToPhysicsSystem_SoundInteractionSettings {
        namespace {
            app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class* type_info_ref = nullptr;
        }
        app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class** type_info = &type_info_ref;
        inline app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class>(type_info, "", "AttachInteractionToPhysicsSystem", "SoundInteractionSettings");
        }
        inline app::AttachInteractionToPhysicsSystem_SoundInteractionSettings* create() {
            return il2cpp::create_object<app::AttachInteractionToPhysicsSystem_SoundInteractionSettings>(get_class());
        }
    } // namespace AttachInteractionToPhysicsSystem_SoundInteractionSettings
} // namespace app::classes::types
