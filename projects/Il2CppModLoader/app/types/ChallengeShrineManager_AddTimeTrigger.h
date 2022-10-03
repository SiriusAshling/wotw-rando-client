#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_AddTimeTrigger {
        namespace {
            app::ChallengeShrineManager_AddTimeTrigger__Class* type_info_ref = nullptr;
        }
        app::ChallengeShrineManager_AddTimeTrigger__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineManager_AddTimeTrigger__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineManager_AddTimeTrigger__Class>(type_info, "", "ChallengeShrineManager", "AddTimeTrigger");
        }
        inline app::ChallengeShrineManager_AddTimeTrigger* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_AddTimeTrigger>(get_class());
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Boxed* box(app::ChallengeShrineManager_AddTimeTrigger value) {
            return il2cpp::box_value<app::ChallengeShrineManager_AddTimeTrigger__Boxed>(get_class(), value);
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::ChallengeShrineManager_AddTimeTrigger__Array>(get_class(), size);
        }
    } // namespace ChallengeShrineManager_AddTimeTrigger
} // namespace app::classes::types
