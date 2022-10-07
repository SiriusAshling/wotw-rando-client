#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalEncoderBestFitFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalEncoderBestFitFallback__Class** type_info;
        inline app::InternalEncoderBestFitFallback__Class* get_class() {
            return il2cpp::get_class<app::InternalEncoderBestFitFallback__Class>(type_info, "System.Text", "InternalEncoderBestFitFallback");
        }
        inline app::InternalEncoderBestFitFallback* create() {
            return il2cpp::create_object<app::InternalEncoderBestFitFallback>(get_class());
        }
    } // namespace InternalEncoderBestFitFallback
} // namespace app::classes::types