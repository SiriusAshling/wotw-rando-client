#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Compositor_CumulativeStats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Compositor_CumulativeStats__Class** type_info;
        inline app::Compositor_CumulativeStats__Class* get_class() {
            return il2cpp::get_class<app::Compositor_CumulativeStats__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "Compositor_CumulativeStats");
        }
        inline app::Compositor_CumulativeStats* create() {
            return il2cpp::create_object<app::Compositor_CumulativeStats>(get_class());
        }
        inline app::Compositor_CumulativeStats__Boxed* box(app::Compositor_CumulativeStats value) {
            return il2cpp::box_value<app::Compositor_CumulativeStats__Boxed>(get_class(), value);
        }
    } // namespace Compositor_CumulativeStats
} // namespace app::classes::types