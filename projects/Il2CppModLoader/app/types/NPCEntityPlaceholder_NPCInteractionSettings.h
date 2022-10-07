#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCEntityPlaceholder_NPCInteractionSettings {
        namespace {
            app::NPCEntityPlaceholder_NPCInteractionSettings__Class* type_info_ref = nullptr;
        }
        app::NPCEntityPlaceholder_NPCInteractionSettings__Class** type_info = &type_info_ref;
        inline app::NPCEntityPlaceholder_NPCInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::NPCEntityPlaceholder_NPCInteractionSettings__Class>(type_info, "", "NPCEntityPlaceholder", "NPCInteractionSettings");
        }
        inline app::NPCEntityPlaceholder_NPCInteractionSettings* create() {
            return il2cpp::create_object<app::NPCEntityPlaceholder_NPCInteractionSettings>(get_class());
        }
        inline app::NPCEntityPlaceholder_NPCInteractionSettings__Boxed* box(app::NPCEntityPlaceholder_NPCInteractionSettings value) {
            return il2cpp::box_value<app::NPCEntityPlaceholder_NPCInteractionSettings__Boxed>(get_class(), value);
        }
    } // namespace NPCEntityPlaceholder_NPCInteractionSettings
} // namespace app::classes::types