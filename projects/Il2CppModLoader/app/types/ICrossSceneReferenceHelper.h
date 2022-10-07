#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICrossSceneReferenceHelper {
        namespace {
            app::ICrossSceneReferenceHelper__Class* type_info_ref = nullptr;
        }
        app::ICrossSceneReferenceHelper__Class** type_info = &type_info_ref;
        inline app::ICrossSceneReferenceHelper__Class* get_class() {
            return il2cpp::get_class<app::ICrossSceneReferenceHelper__Class>(type_info, "Moon", "ICrossSceneReferenceHelper");
        }
    } // namespace ICrossSceneReferenceHelper
} // namespace app::classes::types