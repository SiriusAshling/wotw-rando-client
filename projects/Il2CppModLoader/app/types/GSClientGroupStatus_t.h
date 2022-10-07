#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GSClientGroupStatus_t {
        namespace {
            app::GSClientGroupStatus_t__Class* type_info_ref = nullptr;
        }
        app::GSClientGroupStatus_t__Class** type_info = &type_info_ref;
        inline app::GSClientGroupStatus_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientGroupStatus_t__Class>(type_info, "Steamworks", "GSClientGroupStatus_t");
        }
        inline app::GSClientGroupStatus_t* create() {
            return il2cpp::create_object<app::GSClientGroupStatus_t>(get_class());
        }
        inline app::GSClientGroupStatus_t__Boxed* box(app::GSClientGroupStatus_t value) {
            return il2cpp::box_value<app::GSClientGroupStatus_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientGroupStatus_t
} // namespace app::classes::types