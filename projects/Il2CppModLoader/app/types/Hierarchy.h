#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hierarchy {
        namespace {
            app::Hierarchy__Class* type_info_ref = nullptr;
        }
        app::Hierarchy__Class** type_info = &type_info_ref;
        inline app::Hierarchy__Class* get_class() {
            return il2cpp::get_class<app::Hierarchy__Class>(type_info, "RootMotion", "Hierarchy");
        }
        inline app::Hierarchy* create() {
            return il2cpp::create_object<app::Hierarchy>(get_class());
        }
    } // namespace Hierarchy
} // namespace app::classes::types