#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardUploadScoreMethod__Enum {
        namespace {
            app::ELeaderboardUploadScoreMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::ELeaderboardUploadScoreMethod__Enum__Class** type_info = &type_info_ref;
        inline app::ELeaderboardUploadScoreMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardUploadScoreMethod__Enum__Class>(type_info, "Steamworks", "ELeaderboardUploadScoreMethod");
        }
        inline app::ELeaderboardUploadScoreMethod__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardUploadScoreMethod__Enum>(get_class());
        }
    } // namespace ELeaderboardUploadScoreMethod__Enum
} // namespace app::classes::types
