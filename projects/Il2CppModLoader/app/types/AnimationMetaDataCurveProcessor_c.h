#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataCurveProcessor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMetaDataCurveProcessor_c__Class** type_info;
        inline app::AnimationMetaDataCurveProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaDataCurveProcessor_c__Class>(type_info, "", "AnimationMetaDataCurveProcessor", "<>c");
        }
        inline app::AnimationMetaDataCurveProcessor_c* create() {
            return il2cpp::create_object<app::AnimationMetaDataCurveProcessor_c>(get_class());
        }
    } // namespace AnimationMetaDataCurveProcessor_c
} // namespace app::classes::types