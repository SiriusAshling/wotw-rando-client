#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParsingInfo {
        namespace {
            app::ParsingInfo__Class* type_info_ref = nullptr;
        }
        app::ParsingInfo__Class** type_info = &type_info_ref;
        inline app::ParsingInfo__Class* get_class() {
            return il2cpp::get_class<app::ParsingInfo__Class>(type_info, "System", "ParsingInfo");
        }
        inline app::ParsingInfo* create() {
            return il2cpp::create_object<app::ParsingInfo>(get_class());
        }
        inline app::ParsingInfo__Boxed* box(app::ParsingInfo value) {
            return il2cpp::box_value<app::ParsingInfo__Boxed>(get_class(), value);
        }
    } // namespace ParsingInfo
} // namespace app::classes::types