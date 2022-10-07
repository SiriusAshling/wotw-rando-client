#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderEntity {
        namespace {
            app::ShardTraderEntity__Class* type_info_ref = nullptr;
        }
        app::ShardTraderEntity__Class** type_info = &type_info_ref;
        inline app::ShardTraderEntity__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderEntity__Class>(type_info, "", "ShardTraderEntity");
        }
        inline app::ShardTraderEntity* create() {
            return il2cpp::create_object<app::ShardTraderEntity>(get_class());
        }
    } // namespace ShardTraderEntity
} // namespace app::classes::types