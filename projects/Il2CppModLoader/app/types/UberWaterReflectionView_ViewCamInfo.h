#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_ViewCamInfo {
        namespace {
            app::UberWaterReflectionView_ViewCamInfo__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionView_ViewCamInfo__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_ViewCamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_ViewCamInfo__Class>(type_info, "", "UberWaterReflectionView", "ViewCamInfo");
        }
        inline app::UberWaterReflectionView_ViewCamInfo* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_ViewCamInfo>(get_class());
        }
        inline app::UberWaterReflectionView_ViewCamInfo__Boxed* box(app::UberWaterReflectionView_ViewCamInfo value) {
            return il2cpp::box_value<app::UberWaterReflectionView_ViewCamInfo__Boxed>(get_class(), value);
        }
    } // namespace UberWaterReflectionView_ViewCamInfo
} // namespace app::classes::types
