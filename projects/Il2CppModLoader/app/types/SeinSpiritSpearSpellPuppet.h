#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpellPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSpiritSpearSpellPuppet__Class** type_info;
        inline app::SeinSpiritSpearSpellPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpellPuppet__Class>(type_info, "", "SeinSpiritSpearSpellPuppet");
        }
        inline app::SeinSpiritSpearSpellPuppet* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpellPuppet>(get_class());
        }
    } // namespace SeinSpiritSpearSpellPuppet
} // namespace app::classes::types
