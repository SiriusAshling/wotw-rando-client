#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TessellationModifier {
        namespace {
            app::TessellationModifier__Class* type_info_ref = nullptr;
        }
        app::TessellationModifier__Class** type_info = &type_info_ref;
        inline app::TessellationModifier__Class* get_class() {
            return il2cpp::get_class<app::TessellationModifier__Class>(type_info, "", "TessellationModifier");
        }
        inline app::TessellationModifier* create() {
            return il2cpp::create_object<app::TessellationModifier>(get_class());
        }
    } // namespace TessellationModifier
} // namespace app::classes::types