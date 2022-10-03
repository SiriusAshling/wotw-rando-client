#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolTransformPosition__Array {
        namespace {
            app::PoolTransformPosition__Array__Class* type_info_ref = nullptr;
        }
        app::PoolTransformPosition__Array__Class** type_info = &type_info_ref;
        inline app::PoolTransformPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::PoolTransformPosition__Array__Class>(type_info, "", "PoolTransformPosition[]");
        }
        inline app::PoolTransformPosition__Array* create() {
            return il2cpp::create_object<app::PoolTransformPosition__Array>(get_class());
        }
    } // namespace PoolTransformPosition__Array
} // namespace app::classes::types
