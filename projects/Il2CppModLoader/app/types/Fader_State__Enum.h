#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Fader_State__Enum {
        namespace {
            app::Fader_State__Enum__Class* type_info_ref = nullptr;
        }
        app::Fader_State__Enum__Class** type_info = &type_info_ref;
        inline app::Fader_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Fader_State__Enum__Class>(type_info, "", "Fader", "State");
        }
        inline app::Fader_State__Enum* create() {
            return il2cpp::create_object<app::Fader_State__Enum>(get_class());
        }
    } // namespace Fader_State__Enum
} // namespace app::classes::types