#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_BucketEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeGuidMapping_BucketEntry__Array__Class** type_info;
        inline app::RuntimeGuidMapping_BucketEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping_BucketEntry__Array__Class>(type_info, "", "RuntimeGuidMapping+BucketEntry[]");
        }
        inline app::RuntimeGuidMapping_BucketEntry__Array* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_BucketEntry__Array>(get_class());
        }
    } // namespace RuntimeGuidMapping_BucketEntry__Array
} // namespace app::classes::types
