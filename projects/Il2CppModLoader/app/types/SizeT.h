#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SizeT {
        namespace {
            app::SizeT__Class* type_info_ref = nullptr;
        }
        app::SizeT__Class** type_info = &type_info_ref;
        inline app::SizeT__Class* get_class() {
            return il2cpp::get_class<app::SizeT__Class>(type_info, "XGamingRuntime.Interop", "SizeT");
        }
        inline app::SizeT* create() {
            return il2cpp::create_object<app::SizeT>(get_class());
        }
        inline app::SizeT__Boxed* box(app::SizeT value) {
            return il2cpp::box_value<app::SizeT__Boxed>(get_class(), value);
        }
    } // namespace SizeT
} // namespace app::classes::types