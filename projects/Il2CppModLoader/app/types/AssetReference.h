#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetReference {
        namespace {
            app::AssetReference__Class* type_info_ref = nullptr;
        }
        app::AssetReference__Class** type_info = &type_info_ref;
        inline app::AssetReference__Class* get_class() {
            return il2cpp::get_class<app::AssetReference__Class>(type_info, "PlayFab.MultiplayerModels", "AssetReference");
        }
        inline app::AssetReference* create() {
            return il2cpp::create_object<app::AssetReference>(get_class());
        }
        inline app::AssetReference__Array* create_array(int size) {
            return il2cpp::array_new<app::AssetReference__Array>(get_class(), size);
        }
        inline app::AssetReference__Array* create_array(const std::vector<app::AssetReference*>& items) {
            return il2cpp::array_new<app::AssetReference__Array>(get_class(), items);
        }
    } // namespace AssetReference
} // namespace app::classes::types