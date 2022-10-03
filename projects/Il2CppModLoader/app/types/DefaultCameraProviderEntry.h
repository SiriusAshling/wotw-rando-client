#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry {
        namespace {
            app::DefaultCameraProviderEntry__Class* type_info_ref = nullptr;
        }
        app::DefaultCameraProviderEntry__Class** type_info = &type_info_ref;
        inline app::DefaultCameraProviderEntry__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraProviderEntry__Class>(type_info, "", "DefaultCameraProviderEntry");
        }
        inline app::DefaultCameraProviderEntry* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry>(get_class());
        }
        inline app::DefaultCameraProviderEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DefaultCameraProviderEntry__Array>(get_class(), size);
        }
    } // namespace DefaultCameraProviderEntry
} // namespace app::classes::types
