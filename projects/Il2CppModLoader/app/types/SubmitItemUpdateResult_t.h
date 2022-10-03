#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubmitItemUpdateResult_t {
        namespace {
            app::SubmitItemUpdateResult_t__Class* type_info_ref = nullptr;
        }
        app::SubmitItemUpdateResult_t__Class** type_info = &type_info_ref;
        inline app::SubmitItemUpdateResult_t__Class* get_class() {
            return il2cpp::get_class<app::SubmitItemUpdateResult_t__Class>(type_info, "Steamworks", "SubmitItemUpdateResult_t");
        }
        inline app::SubmitItemUpdateResult_t* create() {
            return il2cpp::create_object<app::SubmitItemUpdateResult_t>(get_class());
        }
        inline app::SubmitItemUpdateResult_t__Boxed* box(app::SubmitItemUpdateResult_t value) {
            return il2cpp::box_value<app::SubmitItemUpdateResult_t__Boxed>(get_class(), value);
        }
    } // namespace SubmitItemUpdateResult_t
} // namespace app::classes::types
