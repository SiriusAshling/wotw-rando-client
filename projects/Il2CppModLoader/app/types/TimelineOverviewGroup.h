#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineOverviewGroup {
        namespace {
            app::TimelineOverviewGroup__Class* type_info_ref = nullptr;
        }
        app::TimelineOverviewGroup__Class** type_info = &type_info_ref;
        inline app::TimelineOverviewGroup__Class* get_class() {
            return il2cpp::get_class<app::TimelineOverviewGroup__Class>(type_info, "", "TimelineOverviewGroup");
        }
        inline app::TimelineOverviewGroup* create() {
            return il2cpp::create_object<app::TimelineOverviewGroup>(get_class());
        }
    } // namespace TimelineOverviewGroup
} // namespace app::classes::types