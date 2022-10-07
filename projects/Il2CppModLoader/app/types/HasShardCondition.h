#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasShardCondition {
        namespace {
            app::HasShardCondition__Class* type_info_ref = nullptr;
        }
        app::HasShardCondition__Class** type_info = &type_info_ref;
        inline app::HasShardCondition__Class* get_class() {
            return il2cpp::get_class<app::HasShardCondition__Class>(type_info, "", "HasShardCondition");
        }
        inline app::HasShardCondition* create() {
            return il2cpp::create_object<app::HasShardCondition>(get_class());
        }
    } // namespace HasShardCondition
} // namespace app::classes::types