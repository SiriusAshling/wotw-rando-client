#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UnityWebRequestUpdate {
        namespace {
            app::EarlyUpdate_UnityWebRequestUpdate__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UnityWebRequestUpdate__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UnityWebRequestUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UnityWebRequestUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UnityWebRequestUpdate");
        }
        inline app::EarlyUpdate_UnityWebRequestUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_UnityWebRequestUpdate>(get_class());
        }
        inline app::EarlyUpdate_UnityWebRequestUpdate__Boxed* box(app::EarlyUpdate_UnityWebRequestUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_UnityWebRequestUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UnityWebRequestUpdate
} // namespace app::classes::types