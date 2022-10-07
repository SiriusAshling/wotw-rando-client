#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnSetup_Anim__Enum {
        namespace {
            app::HornBugSpawnSetup_Anim__Enum__Class* type_info_ref = nullptr;
        }
        app::HornBugSpawnSetup_Anim__Enum__Class** type_info = &type_info_ref;
        inline app::HornBugSpawnSetup_Anim__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugSpawnSetup_Anim__Enum__Class>(type_info, "", "HornBugSpawnSetup", "Anim");
        }
        inline app::HornBugSpawnSetup_Anim__Enum* create() {
            return il2cpp::create_object<app::HornBugSpawnSetup_Anim__Enum>(get_class());
        }
    } // namespace HornBugSpawnSetup_Anim__Enum
} // namespace app::classes::types