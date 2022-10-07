#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightShadingZoneEditorSetup {
        namespace {
            app::LightShadingZoneEditorSetup__Class* type_info_ref = nullptr;
        }
        app::LightShadingZoneEditorSetup__Class** type_info = &type_info_ref;
        inline app::LightShadingZoneEditorSetup__Class* get_class() {
            return il2cpp::get_class<app::LightShadingZoneEditorSetup__Class>(type_info, "", "LightShadingZoneEditorSetup");
        }
        inline app::LightShadingZoneEditorSetup* create() {
            return il2cpp::create_object<app::LightShadingZoneEditorSetup>(get_class());
        }
    } // namespace LightShadingZoneEditorSetup
} // namespace app::classes::types