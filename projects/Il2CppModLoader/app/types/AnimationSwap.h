#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationSwap {
        namespace {
            app::AnimationSwap__Class* type_info_ref = nullptr;
        }
        app::AnimationSwap__Class** type_info = &type_info_ref;
        inline app::AnimationSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwap__Class>(type_info, "", "AnimationSwap");
        }
        inline app::AnimationSwap* create() {
            return il2cpp::create_object<app::AnimationSwap>(get_class());
        }
    } // namespace AnimationSwap
} // namespace app::classes::types