#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullScreenMode__Enum {
        namespace {
            app::FullScreenMode__Enum__Class* type_info_ref = nullptr;
        }
        app::FullScreenMode__Enum__Class** type_info = &type_info_ref;
        inline app::FullScreenMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullScreenMode__Enum__Class>(type_info, "UnityEngine", "FullScreenMode");
        }
        inline app::FullScreenMode__Enum* create() {
            return il2cpp::create_object<app::FullScreenMode__Enum>(get_class());
        }
    } // namespace FullScreenMode__Enum
} // namespace app::classes::types