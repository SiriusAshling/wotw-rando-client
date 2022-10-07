#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClipLoadType__Enum {
        namespace {
            app::AudioClipLoadType__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioClipLoadType__Enum__Class** type_info = &type_info_ref;
        inline app::AudioClipLoadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioClipLoadType__Enum__Class>(type_info, "UnityEngine", "AudioClipLoadType");
        }
        inline app::AudioClipLoadType__Enum* create() {
            return il2cpp::create_object<app::AudioClipLoadType__Enum>(get_class());
        }
    } // namespace AudioClipLoadType__Enum
} // namespace app::classes::types