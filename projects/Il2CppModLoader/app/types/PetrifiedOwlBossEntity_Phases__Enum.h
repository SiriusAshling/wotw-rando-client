#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_Phases__Enum {
        namespace {
            app::PetrifiedOwlBossEntity_Phases__Enum__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossEntity_Phases__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_Phases__Enum__Class>(type_info, "", "PetrifiedOwlBossEntity", "Phases");
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_Phases__Enum>(get_class());
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossEntity_Phases__Enum__Array>(get_class(), size);
        }
    } // namespace PetrifiedOwlBossEntity_Phases__Enum
} // namespace app::classes::types
