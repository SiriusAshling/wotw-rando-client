#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugHornAggroState__Enum {
        namespace {
            app::BugHornAggroState__Enum__Class* type_info_ref = nullptr;
        }
        app::BugHornAggroState__Enum__Class** type_info = &type_info_ref;
        inline app::BugHornAggroState__Enum__Class* get_class() {
            return il2cpp::get_class<app::BugHornAggroState__Enum__Class>(type_info, "", "BugHornAggroState");
        }
        inline app::BugHornAggroState__Enum* create() {
            return il2cpp::create_object<app::BugHornAggroState__Enum>(get_class());
        }
    } // namespace BugHornAggroState__Enum
} // namespace app::classes::types
