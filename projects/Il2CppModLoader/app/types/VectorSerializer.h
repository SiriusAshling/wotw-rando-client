#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VectorSerializer {
        namespace {
            app::VectorSerializer__Class* type_info_ref = nullptr;
        }
        app::VectorSerializer__Class** type_info = &type_info_ref;
        inline app::VectorSerializer__Class* get_class() {
            return il2cpp::get_class<app::VectorSerializer__Class>(type_info, "", "VectorSerializer");
        }
        inline app::VectorSerializer* create() {
            return il2cpp::create_object<app::VectorSerializer>(get_class());
        }
    } // namespace VectorSerializer
} // namespace app::classes::types