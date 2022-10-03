#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetVideoURLResult_t {
        namespace {
            app::GetVideoURLResult_t__Class* type_info_ref = nullptr;
        }
        app::GetVideoURLResult_t__Class** type_info = &type_info_ref;
        inline app::GetVideoURLResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetVideoURLResult_t__Class>(type_info, "Steamworks", "GetVideoURLResult_t");
        }
        inline app::GetVideoURLResult_t* create() {
            return il2cpp::create_object<app::GetVideoURLResult_t>(get_class());
        }
        inline app::GetVideoURLResult_t__Boxed* box(app::GetVideoURLResult_t value) {
            return il2cpp::box_value<app::GetVideoURLResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetVideoURLResult_t
} // namespace app::classes::types
