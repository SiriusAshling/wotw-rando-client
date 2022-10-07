#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager_ResetStateData__Array {
        namespace {
            app::UberStateWwiseStateManager_ResetStateData__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateWwiseStateManager_ResetStateData__Array__Class** type_info = &type_info_ref;
        inline app::UberStateWwiseStateManager_ResetStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateWwiseStateManager_ResetStateData__Array__Class>(type_info, "Moon.Wwise", "UberStateWwiseStateManager+ResetStateData[]");
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Array* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager_ResetStateData__Array>(get_class());
        }
    } // namespace UberStateWwiseStateManager_ResetStateData__Array
} // namespace app::classes::types