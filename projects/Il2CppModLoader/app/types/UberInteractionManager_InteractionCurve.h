#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurve {
        namespace {
            app::UberInteractionManager_InteractionCurve__Class* type_info_ref = nullptr;
        }
        app::UberInteractionManager_InteractionCurve__Class** type_info = &type_info_ref;
        inline app::UberInteractionManager_InteractionCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionCurve__Class>(type_info, "", "UberInteractionManager", "InteractionCurve");
        }
        inline app::UberInteractionManager_InteractionCurve* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurve>(get_class());
        }
        inline app::UberInteractionManager_InteractionCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManager_InteractionCurve__Array>(get_class(), size);
        }
    } // namespace UberInteractionManager_InteractionCurve
} // namespace app::classes::types
