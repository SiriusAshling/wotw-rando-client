#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartPlaceholder__Array {
        namespace {
            app::CartPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        app::CartPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::CartPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::CartPlaceholder__Array__Class>(type_info, "", "CartPlaceholder[]");
        }
        inline app::CartPlaceholder__Array* create() {
            return il2cpp::create_object<app::CartPlaceholder__Array>(get_class());
        }
    } // namespace CartPlaceholder__Array
} // namespace app::classes::types
