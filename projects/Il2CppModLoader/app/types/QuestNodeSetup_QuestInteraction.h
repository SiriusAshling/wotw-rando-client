#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteraction {
        namespace {
            app::QuestNodeSetup_QuestInteraction__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup_QuestInteraction__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteraction__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteraction__Class>(type_info, "", "QuestNodeSetup", "QuestInteraction");
        }
        inline app::QuestNodeSetup_QuestInteraction* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteraction>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteraction__Array>(get_class(), size);
        }
    } // namespace QuestNodeSetup_QuestInteraction
} // namespace app::classes::types
