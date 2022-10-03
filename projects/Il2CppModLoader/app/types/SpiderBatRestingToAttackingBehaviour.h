#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatRestingToAttackingBehaviour {
        namespace {
            app::SpiderBatRestingToAttackingBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBatRestingToAttackingBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatRestingToAttackingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatRestingToAttackingBehaviour__Class>(type_info, "", "SpiderBatRestingToAttackingBehaviour");
        }
        inline app::SpiderBatRestingToAttackingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatRestingToAttackingBehaviour>(get_class());
        }
    } // namespace SpiderBatRestingToAttackingBehaviour
} // namespace app::classes::types
