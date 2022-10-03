#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerBasketEntity {
        namespace {
            app::MinerBasketEntity__Class* type_info_ref = nullptr;
        }
        app::MinerBasketEntity__Class** type_info = &type_info_ref;
        inline app::MinerBasketEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBasketEntity__Class>(type_info, "", "MinerBasketEntity");
        }
        inline app::MinerBasketEntity* create() {
            return il2cpp::create_object<app::MinerBasketEntity>(get_class());
        }
    } // namespace MinerBasketEntity
} // namespace app::classes::types
