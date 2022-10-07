#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LODParameters {
        namespace {
            app::LODParameters__Class* type_info_ref = nullptr;
        }
        app::LODParameters__Class** type_info = &type_info_ref;
        inline app::LODParameters__Class* get_class() {
            return il2cpp::get_class<app::LODParameters__Class>(type_info, "UnityEngine.Experimental.Rendering", "LODParameters");
        }
        inline app::LODParameters* create() {
            return il2cpp::create_object<app::LODParameters>(get_class());
        }
        inline app::LODParameters__Boxed* box(app::LODParameters value) {
            return il2cpp::box_value<app::LODParameters__Boxed>(get_class(), value);
        }
    } // namespace LODParameters
} // namespace app::classes::types