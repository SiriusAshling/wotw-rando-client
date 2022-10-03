#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocessState__Enum {
        namespace {
            app::DirectionalHitReactionPostprocessState__Enum__Class* type_info_ref = nullptr;
        }
        app::DirectionalHitReactionPostprocessState__Enum__Class** type_info = &type_info_ref;
        inline app::DirectionalHitReactionPostprocessState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocessState__Enum__Class>(type_info, "Moon.Animation", "DirectionalHitReactionPostprocessState");
        }
        inline app::DirectionalHitReactionPostprocessState__Enum* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocessState__Enum>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocessState__Enum
} // namespace app::classes::types
