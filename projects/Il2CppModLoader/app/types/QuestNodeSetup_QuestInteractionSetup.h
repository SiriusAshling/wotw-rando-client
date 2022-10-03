#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSetup {
        namespace {
            app::QuestNodeSetup_QuestInteractionSetup__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup_QuestInteractionSetup__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteractionSetup__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteractionSetup__Class>(type_info, "", "QuestNodeSetup", "QuestInteractionSetup");
        }
        inline app::QuestNodeSetup_QuestInteractionSetup* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSetup>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteractionSetup__Array>(get_class(), size);
        }
    } // namespace QuestNodeSetup_QuestInteractionSetup
} // namespace app::classes::types
