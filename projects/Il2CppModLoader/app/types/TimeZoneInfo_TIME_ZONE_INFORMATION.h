#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_TIME_ZONE_INFORMATION {
        namespace {
            app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class* type_info_ref = nullptr;
        }
        app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class>(type_info, "System", "TimeZoneInfo", "TIME_ZONE_INFORMATION");
        }
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION* create() {
            return il2cpp::create_object<app::TimeZoneInfo_TIME_ZONE_INFORMATION>(get_class());
        }
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed* box(app::TimeZoneInfo_TIME_ZONE_INFORMATION value) {
            return il2cpp::box_value<app::TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_TIME_ZONE_INFORMATION
} // namespace app::classes::types