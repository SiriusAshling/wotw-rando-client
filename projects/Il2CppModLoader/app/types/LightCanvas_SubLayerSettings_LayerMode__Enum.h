#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettings_LayerMode__Enum {
        namespace {
            app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class** type_info = &type_info_ref;
        inline app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class>(type_info, "", "LightCanvas+SubLayerSettings", "LayerMode");
        }
        inline app::LightCanvas_SubLayerSettings_LayerMode__Enum* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettings_LayerMode__Enum>(get_class());
        }
    } // namespace LightCanvas_SubLayerSettings_LayerMode__Enum
} // namespace app::classes::types
