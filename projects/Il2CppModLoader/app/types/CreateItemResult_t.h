#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateItemResult_t {
        namespace {
            app::CreateItemResult_t__Class* type_info_ref = nullptr;
        }
        app::CreateItemResult_t__Class** type_info = &type_info_ref;
        inline app::CreateItemResult_t__Class* get_class() {
            return il2cpp::get_class<app::CreateItemResult_t__Class>(type_info, "Steamworks", "CreateItemResult_t");
        }
        inline app::CreateItemResult_t* create() {
            return il2cpp::create_object<app::CreateItemResult_t>(get_class());
        }
        inline app::CreateItemResult_t__Boxed* box(app::CreateItemResult_t value) {
            return il2cpp::box_value<app::CreateItemResult_t__Boxed>(get_class(), value);
        }
    } // namespace CreateItemResult_t
} // namespace app::classes::types
