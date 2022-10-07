#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StopWatchWrapper_Unit__Enum {
        namespace {
            app::StopWatchWrapper_Unit__Enum__Class* type_info_ref = nullptr;
        }
        app::StopWatchWrapper_Unit__Enum__Class** type_info = &type_info_ref;
        inline app::StopWatchWrapper_Unit__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StopWatchWrapper_Unit__Enum__Class>(type_info, "", "StopWatchWrapper", "Unit");
        }
        inline app::StopWatchWrapper_Unit__Enum* create() {
            return il2cpp::create_object<app::StopWatchWrapper_Unit__Enum>(get_class());
        }
    } // namespace StopWatchWrapper_Unit__Enum
} // namespace app::classes::types