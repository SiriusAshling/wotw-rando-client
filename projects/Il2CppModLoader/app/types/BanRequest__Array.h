#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BanRequest__Array {
        namespace {
            app::BanRequest__Array__Class* type_info_ref = nullptr;
        }
        app::BanRequest__Array__Class** type_info = &type_info_ref;
        inline app::BanRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::BanRequest__Array__Class>(type_info, "PlayFab.ServerModels", "BanRequest[]");
        }
        inline app::BanRequest__Array* create() {
            return il2cpp::create_object<app::BanRequest__Array>(get_class());
        }
    } // namespace BanRequest__Array
} // namespace app::classes::types