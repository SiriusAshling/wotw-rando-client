#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateStreamingManager {
        namespace {
            app::EarlyUpdate_UpdateStreamingManager__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UpdateStreamingManager__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateStreamingManager__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateStreamingManager__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateStreamingManager");
        }
        inline app::EarlyUpdate_UpdateStreamingManager* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateStreamingManager>(get_class());
        }
        inline app::EarlyUpdate_UpdateStreamingManager__Boxed* box(app::EarlyUpdate_UpdateStreamingManager value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateStreamingManager__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateStreamingManager
} // namespace app::classes::types