#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriJumpPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OriJumpPuppet__Class** type_info;
        inline app::OriJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::OriJumpPuppet__Class>(type_info, "", "OriJumpPuppet");
        }
        inline app::OriJumpPuppet* create() {
            return il2cpp::create_object<app::OriJumpPuppet>(get_class());
        }
    } // namespace OriJumpPuppet
} // namespace app::classes::types
