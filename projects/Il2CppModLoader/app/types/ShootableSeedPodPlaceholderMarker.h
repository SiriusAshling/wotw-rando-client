#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootableSeedPodPlaceholderMarker {
        namespace {
            app::ShootableSeedPodPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::ShootableSeedPodPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::ShootableSeedPodPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::ShootableSeedPodPlaceholderMarker__Class>(type_info, "", "ShootableSeedPodPlaceholderMarker");
        }
        inline app::ShootableSeedPodPlaceholderMarker* create() {
            return il2cpp::create_object<app::ShootableSeedPodPlaceholderMarker>(get_class());
        }
    } // namespace ShootableSeedPodPlaceholderMarker
} // namespace app::classes::types