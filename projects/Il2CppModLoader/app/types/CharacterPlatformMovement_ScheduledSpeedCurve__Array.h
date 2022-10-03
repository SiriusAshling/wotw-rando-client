#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_ScheduledSpeedCurve__Array {
        namespace {
            app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class** type_info = &type_info_ref;
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class>(type_info, "", "CharacterPlatformMovement+ScheduledSpeedCurve[]");
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array>(get_class());
        }
    } // namespace CharacterPlatformMovement_ScheduledSpeedCurve__Array
} // namespace app::classes::types
