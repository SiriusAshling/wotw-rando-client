#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderDidNotBuyBehaviour {
        namespace {
            app::ShardTraderDidNotBuyBehaviour__Class* type_info_ref = nullptr;
        }
        app::ShardTraderDidNotBuyBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderDidNotBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderDidNotBuyBehaviour__Class>(type_info, "Moon", "ShardTraderDidNotBuyBehaviour");
        }
        inline app::ShardTraderDidNotBuyBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderDidNotBuyBehaviour>(get_class());
        }
    } // namespace ShardTraderDidNotBuyBehaviour
} // namespace app::classes::types