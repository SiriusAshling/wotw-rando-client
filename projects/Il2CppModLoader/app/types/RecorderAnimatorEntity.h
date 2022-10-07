#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderAnimatorEntity {
        namespace {
            app::RecorderAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::RecorderAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::RecorderAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RecorderAnimatorEntity__Class>(type_info, "Moon.Timeline", "RecorderAnimatorEntity");
        }
        inline app::RecorderAnimatorEntity* create() {
            return il2cpp::create_object<app::RecorderAnimatorEntity>(get_class());
        }
    } // namespace RecorderAnimatorEntity
} // namespace app::classes::types