#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AzureRegion__Enum {
        namespace {
            app::AzureRegion__Enum__Class* type_info_ref = nullptr;
        }
        app::AzureRegion__Enum__Class** type_info = &type_info_ref;
        inline app::AzureRegion__Enum__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "AzureRegion");
        }
        inline app::AzureRegion__Enum* create() {
            return il2cpp::create_object<app::AzureRegion__Enum>(get_class());
        }
        inline app::AzureRegion__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AzureRegion__Enum__Array>(get_class(), size);
        }
    } // namespace AzureRegion__Enum
} // namespace app::classes::types
