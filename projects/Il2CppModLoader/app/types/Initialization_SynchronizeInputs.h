#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Initialization_SynchronizeInputs {
        namespace {
            app::Initialization_SynchronizeInputs__Class* type_info_ref = nullptr;
        }
        app::Initialization_SynchronizeInputs__Class** type_info = &type_info_ref;
        inline app::Initialization_SynchronizeInputs__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_SynchronizeInputs__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Initialization", "SynchronizeInputs");
        }
        inline app::Initialization_SynchronizeInputs* create() {
            return il2cpp::create_object<app::Initialization_SynchronizeInputs>(get_class());
        }
        inline app::Initialization_SynchronizeInputs__Boxed* box(app::Initialization_SynchronizeInputs value) {
            return il2cpp::box_value<app::Initialization_SynchronizeInputs__Boxed>(get_class(), value);
        }
    } // namespace Initialization_SynchronizeInputs
} // namespace app::classes::types