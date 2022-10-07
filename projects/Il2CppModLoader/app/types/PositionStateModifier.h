#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionStateModifier {
        namespace {
            app::PositionStateModifier__Class* type_info_ref = nullptr;
        }
        app::PositionStateModifier__Class** type_info = &type_info_ref;
        inline app::PositionStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PositionStateModifier__Class>(type_info, "", "PositionStateModifier");
        }
        inline app::PositionStateModifier* create() {
            return il2cpp::create_object<app::PositionStateModifier>(get_class());
        }
    } // namespace PositionStateModifier
} // namespace app::classes::types