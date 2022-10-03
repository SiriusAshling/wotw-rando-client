#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriHeadIk {
        namespace {
            app::OriHeadIk__Class* type_info_ref = nullptr;
        }
        app::OriHeadIk__Class** type_info = &type_info_ref;
        inline app::OriHeadIk__Class* get_class() {
            return il2cpp::get_class<app::OriHeadIk__Class>(type_info, "Moon", "OriHeadIk");
        }
        inline app::OriHeadIk* create() {
            return il2cpp::create_object<app::OriHeadIk>(get_class());
        }
    } // namespace OriHeadIk
} // namespace app::classes::types
