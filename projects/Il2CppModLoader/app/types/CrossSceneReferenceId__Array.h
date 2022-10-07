#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceId__Array {
        namespace {
            app::CrossSceneReferenceId__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneReferenceId__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceId__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceId__Array__Class>(type_info, "Moon", "CrossSceneReferenceId[]");
        }
        inline app::CrossSceneReferenceId__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceId__Array>(get_class());
        }
    } // namespace CrossSceneReferenceId__Array
} // namespace app::classes::types