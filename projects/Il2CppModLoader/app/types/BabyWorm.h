#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWorm {
        namespace {
            app::BabyWorm__Class* type_info_ref = nullptr;
        }
        app::BabyWorm__Class** type_info = &type_info_ref;
        inline app::BabyWorm__Class* get_class() {
            return il2cpp::get_class<app::BabyWorm__Class>(type_info, "", "BabyWorm");
        }
        inline app::BabyWorm* create() {
            return il2cpp::create_object<app::BabyWorm>(get_class());
        }
    } // namespace BabyWorm
} // namespace app::classes::types