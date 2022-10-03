#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedUtils {
        namespace {
            app::SharedUtils__Class* type_info_ref = nullptr;
        }
        app::SharedUtils__Class** type_info = &type_info_ref;
        inline app::SharedUtils__Class* get_class() {
            return il2cpp::get_class<app::SharedUtils__Class>(type_info, "Ionic.Zlib", "SharedUtils");
        }
        inline app::SharedUtils* create() {
            return il2cpp::create_object<app::SharedUtils>(get_class());
        }
    } // namespace SharedUtils
} // namespace app::classes::types
