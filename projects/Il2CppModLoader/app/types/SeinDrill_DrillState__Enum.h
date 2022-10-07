#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDrill_DrillState__Enum {
        namespace {
            app::SeinDrill_DrillState__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinDrill_DrillState__Enum__Class** type_info = &type_info_ref;
        inline app::SeinDrill_DrillState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDrill_DrillState__Enum__Class>(type_info, "", "SeinDrill", "DrillState");
        }
        inline app::SeinDrill_DrillState__Enum* create() {
            return il2cpp::create_object<app::SeinDrill_DrillState__Enum>(get_class());
        }
    } // namespace SeinDrill_DrillState__Enum
} // namespace app::classes::types