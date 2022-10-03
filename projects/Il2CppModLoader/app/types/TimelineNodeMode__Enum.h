#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineNodeMode__Enum {
        namespace {
            app::TimelineNodeMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TimelineNodeMode__Enum__Class** type_info = &type_info_ref;
        inline app::TimelineNodeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimelineNodeMode__Enum__Class>(type_info, "Moon.InteractionGraph", "TimelineNodeMode");
        }
        inline app::TimelineNodeMode__Enum* create() {
            return il2cpp::create_object<app::TimelineNodeMode__Enum>(get_class());
        }
    } // namespace TimelineNodeMode__Enum
} // namespace app::classes::types
