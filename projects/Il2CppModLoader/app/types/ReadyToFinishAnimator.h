#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadyToFinishAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReadyToFinishAnimator__Class** type_info;
        inline app::ReadyToFinishAnimator__Class* get_class() {
            return il2cpp::get_class<app::ReadyToFinishAnimator__Class>(type_info, "Moon.Timeline", "ReadyToFinishAnimator");
        }
        inline app::ReadyToFinishAnimator* create() {
            return il2cpp::create_object<app::ReadyToFinishAnimator>(get_class());
        }
        inline app::ReadyToFinishAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadyToFinishAnimator__Array>(get_class(), size);
        }
    } // namespace ReadyToFinishAnimator
} // namespace app::classes::types
