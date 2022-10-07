#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyPointAmbienceZone {
        namespace {
            app::LegacyPointAmbienceZone__Class* type_info_ref = nullptr;
        }
        app::LegacyPointAmbienceZone__Class** type_info = &type_info_ref;
        inline app::LegacyPointAmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::LegacyPointAmbienceZone__Class>(type_info, "", "LegacyPointAmbienceZone");
        }
        inline app::LegacyPointAmbienceZone* create() {
            return il2cpp::create_object<app::LegacyPointAmbienceZone>(get_class());
        }
    } // namespace LegacyPointAmbienceZone
} // namespace app::classes::types