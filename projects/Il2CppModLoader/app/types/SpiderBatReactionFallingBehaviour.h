#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatReactionFallingBehaviour {
        namespace {
            app::SpiderBatReactionFallingBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBatReactionFallingBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatReactionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatReactionFallingBehaviour__Class>(type_info, "", "SpiderBatReactionFallingBehaviour");
        }
        inline app::SpiderBatReactionFallingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatReactionFallingBehaviour>(get_class());
        }
    } // namespace SpiderBatReactionFallingBehaviour
} // namespace app::classes::types