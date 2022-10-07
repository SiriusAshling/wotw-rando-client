#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaVinePhysics {
        namespace {
            app::LianaVinePhysics__Class* type_info_ref = nullptr;
        }
        app::LianaVinePhysics__Class** type_info = &type_info_ref;
        inline app::LianaVinePhysics__Class* get_class() {
            return il2cpp::get_class<app::LianaVinePhysics__Class>(type_info, "", "LianaVinePhysics");
        }
        inline app::LianaVinePhysics* create() {
            return il2cpp::create_object<app::LianaVinePhysics>(get_class());
        }
    } // namespace LianaVinePhysics
} // namespace app::classes::types