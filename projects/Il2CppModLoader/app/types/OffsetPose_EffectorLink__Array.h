#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetPose_EffectorLink__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OffsetPose_EffectorLink__Array__Class** type_info;
        inline app::OffsetPose_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::OffsetPose_EffectorLink__Array__Class>(type_info, "RootMotion.FinalIK", "OffsetPose+EffectorLink[]");
        }
        inline app::OffsetPose_EffectorLink__Array* create() {
            return il2cpp::create_object<app::OffsetPose_EffectorLink__Array>(get_class());
        }
    } // namespace OffsetPose_EffectorLink__Array
} // namespace app::classes::types
