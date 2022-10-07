#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShadowsMidtonesHighlights {
        namespace {
            app::ShadowsMidtonesHighlights__Class* type_info_ref = nullptr;
        }
        app::ShadowsMidtonesHighlights__Class** type_info = &type_info_ref;
        inline app::ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShadowsMidtonesHighlights__Class>(type_info, "Colorful", "ShadowsMidtonesHighlights");
        }
        inline app::ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShadowsMidtonesHighlights
} // namespace app::classes::types