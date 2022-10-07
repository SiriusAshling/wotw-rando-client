#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetModifier {
        namespace {
            app::OffsetModifier__Class* type_info_ref = nullptr;
        }
        app::OffsetModifier__Class** type_info = &type_info_ref;
        inline app::OffsetModifier__Class* get_class() {
            return il2cpp::get_class<app::OffsetModifier__Class>(type_info, "RootMotion.FinalIK", "OffsetModifier");
        }
        inline app::OffsetModifier* create() {
            return il2cpp::create_object<app::OffsetModifier>(get_class());
        }
    } // namespace OffsetModifier
} // namespace app::classes::types