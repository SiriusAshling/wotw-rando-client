#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundManager_AudioQualitySetting__Enum {
        namespace {
            app::GameplaySoundManager_AudioQualitySetting__Enum__Class* type_info_ref = nullptr;
        }
        app::GameplaySoundManager_AudioQualitySetting__Enum__Class** type_info = &type_info_ref;
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplaySoundManager_AudioQualitySetting__Enum__Class>(type_info, "", "GameplaySoundManager", "AudioQualitySetting");
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum* create() {
            return il2cpp::create_object<app::GameplaySoundManager_AudioQualitySetting__Enum>(get_class());
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameplaySoundManager_AudioQualitySetting__Enum__Array>(get_class(), size);
        }
        inline app::GameplaySoundManager_AudioQualitySetting__Enum__Array* create_array(const std::vector<app::GameplaySoundManager_AudioQualitySetting__Enum*>& items) {
            return il2cpp::array_new<app::GameplaySoundManager_AudioQualitySetting__Enum__Array>(get_class(), items);
        }
    } // namespace GameplaySoundManager_AudioQualitySetting__Enum
} // namespace app::classes::types