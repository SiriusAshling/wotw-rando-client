#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWormSand {
        namespace {
            app::BabyWormSand__Class* type_info_ref = nullptr;
        }
        app::BabyWormSand__Class** type_info = &type_info_ref;
        inline app::BabyWormSand__Class* get_class() {
            return il2cpp::get_class<app::BabyWormSand__Class>(type_info, "", "BabyWormSand");
        }
        inline app::BabyWormSand* create() {
            return il2cpp::create_object<app::BabyWormSand>(get_class());
        }
    } // namespace BabyWormSand
} // namespace app::classes::types