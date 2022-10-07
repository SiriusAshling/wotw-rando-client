#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InteractionInformation {
        namespace {
            app::RigidbodyInteractionController_InteractionInformation__Class* type_info_ref = nullptr;
        }
        app::RigidbodyInteractionController_InteractionInformation__Class** type_info = &type_info_ref;
        inline app::RigidbodyInteractionController_InteractionInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_InteractionInformation__Class>(type_info, "", "RigidbodyInteractionController", "InteractionInformation");
        }
        inline app::RigidbodyInteractionController_InteractionInformation* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InteractionInformation>(get_class());
        }
        inline app::RigidbodyInteractionController_InteractionInformation__Boxed* box(app::RigidbodyInteractionController_InteractionInformation value) {
            return il2cpp::box_value<app::RigidbodyInteractionController_InteractionInformation__Boxed>(get_class(), value);
        }
    } // namespace RigidbodyInteractionController_InteractionInformation
} // namespace app::classes::types