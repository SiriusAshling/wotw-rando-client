#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraInfluencePositionZone {
        namespace {
            app::CameraInfluencePositionZone__Class* type_info_ref = nullptr;
        }
        app::CameraInfluencePositionZone__Class** type_info = &type_info_ref;
        inline app::CameraInfluencePositionZone__Class* get_class() {
            return il2cpp::get_class<app::CameraInfluencePositionZone__Class>(type_info, "", "CameraInfluencePositionZone");
        }
        inline app::CameraInfluencePositionZone* create() {
            return il2cpp::create_object<app::CameraInfluencePositionZone>(get_class());
        }
    } // namespace CameraInfluencePositionZone
} // namespace app::classes::types