#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowSeinUIAnimator {
        namespace {
            app::ShowSeinUIAnimator__Class* type_info_ref = nullptr;
        }
        app::ShowSeinUIAnimator__Class** type_info = &type_info_ref;
        inline app::ShowSeinUIAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAnimator__Class>(type_info, "", "ShowSeinUIAnimator");
        }
        inline app::ShowSeinUIAnimator* create() {
            return il2cpp::create_object<app::ShowSeinUIAnimator>(get_class());
        }
    } // namespace ShowSeinUIAnimator
} // namespace app::classes::types