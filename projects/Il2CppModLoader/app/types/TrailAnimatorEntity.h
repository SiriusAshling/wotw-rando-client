#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrailAnimatorEntity {
        namespace {
            app::TrailAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::TrailAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::TrailAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TrailAnimatorEntity__Class>(type_info, "Moon.Timeline", "TrailAnimatorEntity");
        }
        inline app::TrailAnimatorEntity* create() {
            return il2cpp::create_object<app::TrailAnimatorEntity>(get_class());
        }
    } // namespace TrailAnimatorEntity
} // namespace app::classes::types