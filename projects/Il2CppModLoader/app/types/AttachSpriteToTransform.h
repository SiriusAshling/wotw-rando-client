#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToTransform {
        namespace {
            app::AttachSpriteToTransform__Class* type_info_ref = nullptr;
        }
        app::AttachSpriteToTransform__Class** type_info = &type_info_ref;
        inline app::AttachSpriteToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToTransform__Class>(type_info, "", "AttachSpriteToTransform");
        }
        inline app::AttachSpriteToTransform* create() {
            return il2cpp::create_object<app::AttachSpriteToTransform>(get_class());
        }
    } // namespace AttachSpriteToTransform
} // namespace app::classes::types
