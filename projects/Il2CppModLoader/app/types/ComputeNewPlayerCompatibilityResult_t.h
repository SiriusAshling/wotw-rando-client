#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComputeNewPlayerCompatibilityResult_t {
        namespace {
            app::ComputeNewPlayerCompatibilityResult_t__Class* type_info_ref = nullptr;
        }
        app::ComputeNewPlayerCompatibilityResult_t__Class** type_info = &type_info_ref;
        inline app::ComputeNewPlayerCompatibilityResult_t__Class* get_class() {
            return il2cpp::get_class<app::ComputeNewPlayerCompatibilityResult_t__Class>(type_info, "Steamworks", "ComputeNewPlayerCompatibilityResult_t");
        }
        inline app::ComputeNewPlayerCompatibilityResult_t* create() {
            return il2cpp::create_object<app::ComputeNewPlayerCompatibilityResult_t>(get_class());
        }
        inline app::ComputeNewPlayerCompatibilityResult_t__Boxed* box(app::ComputeNewPlayerCompatibilityResult_t value) {
            return il2cpp::box_value<app::ComputeNewPlayerCompatibilityResult_t__Boxed>(get_class(), value);
        }
    } // namespace ComputeNewPlayerCompatibilityResult_t
} // namespace app::classes::types