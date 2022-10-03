#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_JointMetadata {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletPhysicsAnimationPostprocess_JointMetadata__Class** type_info;
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_JointMetadata__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess", "JointMetadata");
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_JointMetadata>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array>(get_class(), size);
        }
    } // namespace VerletPhysicsAnimationPostprocess_JointMetadata
} // namespace app::classes::types
