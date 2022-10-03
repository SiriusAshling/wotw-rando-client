#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspendWhenOutOfFrustrum {
        namespace {
            app::SuspendWhenOutOfFrustrum__Class* type_info_ref = nullptr;
        }
        app::SuspendWhenOutOfFrustrum__Class** type_info = &type_info_ref;
        inline app::SuspendWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOutOfFrustrum__Class>(type_info, "", "SuspendWhenOutOfFrustrum");
        }
        inline app::SuspendWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::SuspendWhenOutOfFrustrum>(get_class());
        }
    } // namespace SuspendWhenOutOfFrustrum
} // namespace app::classes::types
