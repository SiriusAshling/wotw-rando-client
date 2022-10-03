#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTextureSettingsAnimator_TextureName__Enum {
        namespace {
            app::UberTextureSettingsAnimator_TextureName__Enum__Class* type_info_ref = nullptr;
        }
        app::UberTextureSettingsAnimator_TextureName__Enum__Class** type_info = &type_info_ref;
        inline app::UberTextureSettingsAnimator_TextureName__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberTextureSettingsAnimator_TextureName__Enum__Class>(type_info, "", "UberTextureSettingsAnimator", "TextureName");
        }
        inline app::UberTextureSettingsAnimator_TextureName__Enum* create() {
            return il2cpp::create_object<app::UberTextureSettingsAnimator_TextureName__Enum>(get_class());
        }
    } // namespace UberTextureSettingsAnimator_TextureName__Enum
} // namespace app::classes::types
