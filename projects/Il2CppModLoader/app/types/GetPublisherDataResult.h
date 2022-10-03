#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPublisherDataResult__Class** type_info;
        inline app::GetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult__Class>(type_info, "PlayFab.ClientModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult* create() {
            return il2cpp::create_object<app::GetPublisherDataResult>(get_class());
        }
    } // namespace GetPublisherDataResult
} // namespace app::classes::types
