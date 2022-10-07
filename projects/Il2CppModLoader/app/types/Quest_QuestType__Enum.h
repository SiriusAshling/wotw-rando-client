#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quest_QuestType__Enum {
        namespace {
            app::Quest_QuestType__Enum__Class* type_info_ref = nullptr;
        }
        app::Quest_QuestType__Enum__Class** type_info = &type_info_ref;
        inline app::Quest_QuestType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Quest_QuestType__Enum__Class>(type_info, "", "Quest", "QuestType");
        }
        inline app::Quest_QuestType__Enum* create() {
            return il2cpp::create_object<app::Quest_QuestType__Enum>(get_class());
        }
    } // namespace Quest_QuestType__Enum
} // namespace app::classes::types