#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord_EntityQueue__Enum {
        namespace {
            app::TimelineEntityRecord_EntityQueue__Enum__Class* type_info_ref = nullptr;
        }
        app::TimelineEntityRecord_EntityQueue__Enum__Class** type_info = &type_info_ref;
        inline app::TimelineEntityRecord_EntityQueue__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEntityRecord_EntityQueue__Enum__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord", "EntityQueue");
        }
        inline app::TimelineEntityRecord_EntityQueue__Enum* create() {
            return il2cpp::create_object<app::TimelineEntityRecord_EntityQueue__Enum>(get_class());
        }
    } // namespace TimelineEntityRecord_EntityQueue__Enum
} // namespace app::classes::types
