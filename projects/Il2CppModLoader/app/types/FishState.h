#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishState {
        namespace {
            app::FishState__Class* type_info_ref = nullptr;
        }
        app::FishState__Class** type_info = &type_info_ref;
        inline app::FishState__Class* get_class() {
            return il2cpp::get_class<app::FishState__Class>(type_info, "", "FishState");
        }
        inline app::FishState* create() {
            return il2cpp::create_object<app::FishState>(get_class());
        }
    } // namespace FishState
} // namespace app::classes::types