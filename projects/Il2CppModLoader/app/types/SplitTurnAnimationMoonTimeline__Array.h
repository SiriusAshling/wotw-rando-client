#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline__Array {
        namespace {
            app::SplitTurnAnimationMoonTimeline__Array__Class* type_info_ref = nullptr;
        }
        app::SplitTurnAnimationMoonTimeline__Array__Class** type_info = &type_info_ref;
        inline app::SplitTurnAnimationMoonTimeline__Array__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimationMoonTimeline__Array__Class>(type_info, "", "SplitTurnAnimationMoonTimeline[]");
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline__Array>(get_class());
        }
    } // namespace SplitTurnAnimationMoonTimeline__Array
} // namespace app::classes::types
