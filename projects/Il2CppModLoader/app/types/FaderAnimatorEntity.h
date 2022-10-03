#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaderAnimatorEntity {
        namespace {
            app::FaderAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::FaderAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::FaderAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::FaderAnimatorEntity__Class>(type_info, "Moon.Timeline", "FaderAnimatorEntity");
        }
        inline app::FaderAnimatorEntity* create() {
            return il2cpp::create_object<app::FaderAnimatorEntity>(get_class());
        }
    } // namespace FaderAnimatorEntity
} // namespace app::classes::types
