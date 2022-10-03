#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationHumanStream {
        namespace {
            app::AnimationHumanStream__Class* type_info_ref = nullptr;
        }
        app::AnimationHumanStream__Class** type_info = &type_info_ref;
        inline app::AnimationHumanStream__Class* get_class() {
            return il2cpp::get_class<app::AnimationHumanStream__Class>(type_info, "UnityEngine.Experimental.Animations", "AnimationHumanStream");
        }
        inline app::AnimationHumanStream* create() {
            return il2cpp::create_object<app::AnimationHumanStream>(get_class());
        }
        inline app::AnimationHumanStream__Boxed* box(app::AnimationHumanStream value) {
            return il2cpp::box_value<app::AnimationHumanStream__Boxed>(get_class(), value);
        }
    } // namespace AnimationHumanStream
} // namespace app::classes::types
