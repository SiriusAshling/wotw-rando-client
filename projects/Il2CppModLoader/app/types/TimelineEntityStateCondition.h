#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityStateCondition {
        namespace {
            app::TimelineEntityStateCondition__Class* type_info_ref = nullptr;
        }
        app::TimelineEntityStateCondition__Class** type_info = &type_info_ref;
        inline app::TimelineEntityStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityStateCondition__Class>(type_info, "", "TimelineEntityStateCondition");
        }
        inline app::TimelineEntityStateCondition* create() {
            return il2cpp::create_object<app::TimelineEntityStateCondition>(get_class());
        }
    } // namespace TimelineEntityStateCondition
} // namespace app::classes::types