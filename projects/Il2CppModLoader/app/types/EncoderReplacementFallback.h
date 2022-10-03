#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderReplacementFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderReplacementFallback__Class** type_info;
        inline app::EncoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallback__Class>(type_info, "System.Text", "EncoderReplacementFallback");
        }
        inline app::EncoderReplacementFallback* create() {
            return il2cpp::create_object<app::EncoderReplacementFallback>(get_class());
        }
    } // namespace EncoderReplacementFallback
} // namespace app::classes::types
