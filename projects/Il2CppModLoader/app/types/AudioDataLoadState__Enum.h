#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioDataLoadState__Enum {
        namespace {
            app::AudioDataLoadState__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioDataLoadState__Enum__Class** type_info = &type_info_ref;
        inline app::AudioDataLoadState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioDataLoadState__Enum__Class>(type_info, "UnityEngine", "AudioDataLoadState");
        }
        inline app::AudioDataLoadState__Enum* create() {
            return il2cpp::create_object<app::AudioDataLoadState__Enum>(get_class());
        }
    } // namespace AudioDataLoadState__Enum
} // namespace app::classes::types