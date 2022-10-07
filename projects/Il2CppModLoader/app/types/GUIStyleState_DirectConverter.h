#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIStyleState_DirectConverter {
        namespace {
            app::GUIStyleState_DirectConverter__Class* type_info_ref = nullptr;
        }
        app::GUIStyleState_DirectConverter__Class** type_info = &type_info_ref;
        inline app::GUIStyleState_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "GUIStyleState_DirectConverter");
        }
        inline app::GUIStyleState_DirectConverter* create() {
            return il2cpp::create_object<app::GUIStyleState_DirectConverter>(get_class());
        }
    } // namespace GUIStyleState_DirectConverter
} // namespace app::classes::types