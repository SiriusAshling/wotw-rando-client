#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfoOptions__Enum {
        namespace {
            app::TimeZoneInfoOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::TimeZoneInfoOptions__Enum__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfoOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfoOptions__Enum__Class>(type_info, "System", "TimeZoneInfoOptions");
        }
        inline app::TimeZoneInfoOptions__Enum* create() {
            return il2cpp::create_object<app::TimeZoneInfoOptions__Enum>(get_class());
        }
    } // namespace TimeZoneInfoOptions__Enum
} // namespace app::classes::types
