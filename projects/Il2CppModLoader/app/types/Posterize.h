#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Posterize {
        namespace {
            app::Posterize__Class* type_info_ref = nullptr;
        }
        app::Posterize__Class** type_info = &type_info_ref;
        inline app::Posterize__Class* get_class() {
            return il2cpp::get_class<app::Posterize__Class>(type_info, "Colorful", "Posterize");
        }
        inline app::Posterize* create() {
            return il2cpp::create_object<app::Posterize>(get_class());
        }
    } // namespace Posterize
} // namespace app::classes::types
