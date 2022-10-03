#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsSceneLoaded {
        namespace {
            app::IsSceneLoaded__Class* type_info_ref = nullptr;
        }
        app::IsSceneLoaded__Class** type_info = &type_info_ref;
        inline app::IsSceneLoaded__Class* get_class() {
            return il2cpp::get_class<app::IsSceneLoaded__Class>(type_info, "", "IsSceneLoaded");
        }
        inline app::IsSceneLoaded* create() {
            return il2cpp::create_object<app::IsSceneLoaded>(get_class());
        }
    } // namespace IsSceneLoaded
} // namespace app::classes::types
