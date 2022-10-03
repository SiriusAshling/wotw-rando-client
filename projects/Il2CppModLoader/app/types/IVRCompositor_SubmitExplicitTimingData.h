#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SubmitExplicitTimingData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_SubmitExplicitTimingData__Class** type_info;
        inline app::IVRCompositor_SubmitExplicitTimingData__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SubmitExplicitTimingData__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SubmitExplicitTimingData");
        }
        inline app::IVRCompositor_SubmitExplicitTimingData* create() {
            return il2cpp::create_object<app::IVRCompositor_SubmitExplicitTimingData>(get_class());
        }
    } // namespace IVRCompositor_SubmitExplicitTimingData
} // namespace app::classes::types
