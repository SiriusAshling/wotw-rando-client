#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_Flash_Color {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Manga_Flash_Color__Class** type_info;
        inline app::CameraFilterPack_Drawing_Manga_Flash_Color__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_Flash_Color__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_Flash_Color");
        }
        inline app::CameraFilterPack_Drawing_Manga_Flash_Color* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_Flash_Color>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_Flash_Color
} // namespace app::classes::types
