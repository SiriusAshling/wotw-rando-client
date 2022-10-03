#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonEdgeClamberble {
        namespace {
            app::NonEdgeClamberble__Class* type_info_ref = nullptr;
        }
        app::NonEdgeClamberble__Class** type_info = &type_info_ref;
        inline app::NonEdgeClamberble__Class* get_class() {
            return il2cpp::get_class<app::NonEdgeClamberble__Class>(type_info, "", "NonEdgeClamberble");
        }
        inline app::NonEdgeClamberble* create() {
            return il2cpp::create_object<app::NonEdgeClamberble>(get_class());
        }
    } // namespace NonEdgeClamberble
} // namespace app::classes::types
