#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIcons {
        namespace {
            app::SpiritShardIcons__Class* type_info_ref = nullptr;
        }
        app::SpiritShardIcons__Class** type_info = &type_info_ref;
        inline app::SpiritShardIcons__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIcons__Class>(type_info, "", "SpiritShardIcons");
        }
        inline app::SpiritShardIcons* create() {
            return il2cpp::create_object<app::SpiritShardIcons>(get_class());
        }
    } // namespace SpiritShardIcons
} // namespace app::classes::types
