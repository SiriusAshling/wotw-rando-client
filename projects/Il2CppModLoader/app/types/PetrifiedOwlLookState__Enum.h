#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookState__Enum {
        namespace {
            app::PetrifiedOwlLookState__Enum__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlLookState__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlLookState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookState__Enum__Class>(type_info, "Moon", "PetrifiedOwlLookState");
        }
        inline app::PetrifiedOwlLookState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlLookState__Enum
} // namespace app::classes::types