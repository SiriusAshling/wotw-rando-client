#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectOffset_DirectConverter {
        namespace {
            app::RectOffset_DirectConverter__Class* type_info_ref = nullptr;
        }
        app::RectOffset_DirectConverter__Class** type_info = &type_info_ref;
        inline app::RectOffset_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::RectOffset_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "RectOffset_DirectConverter");
        }
        inline app::RectOffset_DirectConverter* create() {
            return il2cpp::create_object<app::RectOffset_DirectConverter>(get_class());
        }
    } // namespace RectOffset_DirectConverter
} // namespace app::classes::types