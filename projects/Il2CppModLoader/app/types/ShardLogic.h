#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardLogic {
        namespace {
            app::ShardLogic__Class* type_info_ref = nullptr;
        }
        app::ShardLogic__Class** type_info = &type_info_ref;
        inline app::ShardLogic__Class* get_class() {
            return il2cpp::get_class<app::ShardLogic__Class>(type_info, "", "ShardLogic");
        }
        inline app::ShardLogic* create() {
            return il2cpp::create_object<app::ShardLogic>(get_class());
        }
    } // namespace ShardLogic
} // namespace app::classes::types