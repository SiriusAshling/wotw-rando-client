#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlJumpBehaviour {
        namespace {
            app::PetrifiedOwlJumpBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlJumpBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlJumpBehaviour__Class>(type_info, "Moon", "PetrifiedOwlJumpBehaviour");
        }
        inline app::PetrifiedOwlJumpBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlJumpBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlJumpBehaviour
} // namespace app::classes::types