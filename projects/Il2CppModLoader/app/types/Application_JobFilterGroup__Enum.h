#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Application_JobFilterGroup__Enum {
        namespace {
            app::Application_JobFilterGroup__Enum__Class* type_info_ref = nullptr;
        }
        app::Application_JobFilterGroup__Enum__Class** type_info = &type_info_ref;
        inline app::Application_JobFilterGroup__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_JobFilterGroup__Enum__Class>(type_info, "UnityEngine", "Application", "JobFilterGroup");
        }
        inline app::Application_JobFilterGroup__Enum* create() {
            return il2cpp::create_object<app::Application_JobFilterGroup__Enum>(get_class());
        }
    } // namespace Application_JobFilterGroup__Enum
} // namespace app::classes::types